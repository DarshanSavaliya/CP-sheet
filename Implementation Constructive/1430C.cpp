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
    int n;
    cin >> n;
    multiset<int> st;
    vvi arr;

    fin(i, n) st.insert(i+1);

    while(st.size() > 1) {
        int a = *st.rbegin();
        int b = *(++st.rbegin());
        st.erase(a);
        st.erase(b);
        int mid = (a+b+1) >> 1;
        arr.pb(vi({a, b}));
        st.insert(mid);
    }
    cout << *st.begin() << endl;

    for(vi ar: arr) {
        cout << ar[0] << " " << ar[1] << endl;
    }
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