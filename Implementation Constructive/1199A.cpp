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
    int n, x, y;
    cin >> n >> x >> y;
    stack<int> st;
    vi arr(n);
    vector<bool> nsr(n, false);
    fin(i, n) cin >> arr[i];

    deque<int> dq;

    for(int i=n-1; i>=0; i--) {
        if(!dq.empty() && dq.front() - i > y) dq.pop_front();
        while(!dq.empty() && arr[dq.back()] >= arr[i]) dq.pop_back();

        dq.push_back(i);

        if(dq.front() == i) nsr[i] = true;
    }
    
    while(!dq.empty()) dq.pop_back();

    for(int i=0; i<n; i++) {
        if(!dq.empty() && i - dq.front() > x) dq.pop_front();
        while(!dq.empty() && arr[dq.back()] >= arr[i]) dq.pop_back();

        dq.push_back(i);

        if(dq.front() == i && nsr[i]) {
            cout << i+1 << endl;
            return;
        }
    }
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