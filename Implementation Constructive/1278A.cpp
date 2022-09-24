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
    string p, h;
    cin >> p >> h;
    vector<int> a(26, 0), b(26, 0);

    for(char ch: p) a[ch-'a']++;

    int low = 0;

    for(int i=0; i<h.size(); i++) {
        char ch = h[i];
        b[ch - 'a']++;
        while(b[ch - 'a'] > a[ch - 'a']) {
            b[h[low++] - 'a']--;
        }
        if(a == b) {
            cout << "YES" << endl;
            return;
        }
    }

    for(char ch: h) {
    }

    cout << "NO" << endl;    
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