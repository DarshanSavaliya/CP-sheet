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

bool help(string &ans, int n) {
    if(n == 0) return true;
    if(n-7 >= 0) {
        ans.pb('7');
        if(help(ans, n-7)) return true;
        ans.pop_back();
    }
    if(n-4 >= 0) {
        ans.pb('4');
        if(help(ans, n-4)) return true;
        ans.pop_back();
    } 

    return false;
}

void solve() {
    int n;
    cin >> n;
    string ans;
    
    if(help(ans, n)) {
        reverse(all(ans)); 
        cout << ans << endl;
    }
    else cout << "-1" << endl;
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