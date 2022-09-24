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

ll sum(ll n) { 
    return (n * (n + 1)) >> 1; 
}

ll sum(ll s, ll e) {
    if (s <= 1) return sum(e);

    return sum(e) - sum(s - 1);
}

ll minSplitters(ll n, ll k) {
    k--, n--;
    if(sum(k) < n) return -1LL;

    ll low = 1, high = k;

    while (low <= high) {
        ll mid = (low + high) / 2;
        ll s = sum(mid, k);

        if (s == n) return k - mid + 1;

        if (s > n)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return k - high + 1;
}

void solve() {
    ll n, k;
    cin >> n >> k;

    ll sum = (k*(k-1)) >> 1;

    if(n == 1) cout << "0" << endl;
    else if(n <= k) cout << "1" << endl;
    else cout << minSplitters(n, k) << endl;
}

int main() {
    fast_cin();

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    } 

    return 0;
}