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

bool possible(ll h, ll k, int n, vi &a) {
    for(int i=0; i<n-1; i++) {
        h -= min(k, (ll)a[i+1] - a[i]);
        if(h <= 0) return true;
    }

    return h <= k;
}

void solve() {
    int n;
    cin >> n;
    ll h;
    cin >> h;
    vi arr(n);
    fin(i, n) cin >> arr[i];

    ll low = 1, high = h;
    while(low <= high) {
        ll mid = (low+high) >> 1;
        if(possible(h, mid, n, arr)) high = mid - 1;
        else low = mid + 1;
    }

    cout << low << endl;    
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