#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <iostream>

using namespace std;

#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define us unsigned short
#define ld long double
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<pii>
#define vvii vector<vii>
#define mp make_pair
#define pb push_back
#define pq priority_queue
#define all(v) v.begin(),v.end()
#define fin(i, n) for (int i = 0; i < n; i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define ff first
#define ss second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int gcd(int x, int y) { return y == 0 ? x : gcd(y, x % y); }

void solve() {
    int n;
    cin >> n;
    vi a(n), bits(30, 0);
    fin(i, n) { 
        cin >> a[i];
        fin(j, 30) if(a[i]&(1 << j)) bits[j]++;
    }

    int d=1;
    fin(i, 30) if(bits[i]) d=0;
    if(d) {
        for(int i=1; i<=n; i++) cout << i << " ";
        cout << endl;
        return;
    }
    int g = bits[0];
    for(int i=1; i<30; i++) g = gcd(g, bits[i]);
    for(int i=1; i<=g; i++) if(g%i == 0) cout << i << " ";
    cout << endl;
}

int main() {
    fast_cin();

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    } 

    return 0;
}