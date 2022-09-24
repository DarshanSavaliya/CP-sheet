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
    int n, k;
    cin >> n >> k;
    vi arr(n);
    fin(i, n) cin >> arr[i];
    
    pq<pii, vii, greater<pii>> heap;
    int i = 1;
    for(int j: arr) {
        heap.push({j, i++});
    }

    arr = vi();

    while(!heap.empty() && k>= heap.top().ff) {
        k -= heap.top().ff;
        arr.pb(heap.top().ss);
        heap.pop();
    }

    cout << arr.size() << endl;
    fin(j, arr.size()) cout << arr[j] << " ";
    cout << endl;

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