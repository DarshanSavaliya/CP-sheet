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

void solve() {
    int w, h;
    cin >> w >> h;
    int k;
    cin >> k;
    vi a(k);
    fin(i, k) cin >> a[i];
    cin >> k;
    vi b(k);
    fin(i, k) cin >> b[i];
    cin >> k;
    vi c(k);
    fin(i, k) cin >> c[i];
    cin >> k;
    vi d(k);
    fin(i, k) cin >> d[i];

    ll area1 = max(a.back()-a[0], b.back()-b[0])*(ll)h;
    ll area2 = max(c.back()-c[0], d.back()-d[0])*(ll)w;

    cout << max(area1, area2) << endl;    
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