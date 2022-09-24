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
    string s, e;
    cin >> s >> e;

    int h1 = stoi(s.substr(0, 2));    
    int h2 = stoi(e.substr(0, 2));
    int m1 = stoi(s.substr(3, 2));
    int m2 = stoi(e.substr(3, 2));

    int t1 = h1*60 + m1;
    int t2 = h2*60 + m2;
    int mid = (t1+t2) >> 1;

    int h3 = mid/60;
    int m3 = mid%60;

    cout << setfill('0') << setw(2) <<  h3 << ":" << setfill('0') << setw(2) << m3 << endl;
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