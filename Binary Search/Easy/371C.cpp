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

bool possible(vector<ll> req, vector<ll> avail, vector<ll> price, ll rubles, ll x) {
    ll money = 0;
    fin(i, 3) {
        money += max(req[i]*x - avail[i], 0LL)*price[i];
    }

    return money <= rubles;
}

void solve() {
    string s;
    cin >> s;
    int n = 3;
    vector<ll> req(n, 0), avail(n), price(n);
    fin(i, n) cin >> avail[i];
    fin(i, n) cin >> price[i];

    ll rubles;
    cin >> rubles;

    for(char ch: s) {
        req[0] += ch == 'B';
        req[1] += ch == 'S';
        req[2] += ch == 'C';
    }

    ll low = 0, high = 1e14;
    
    while(low <= high) {
        ll mid = (low+high) >> 1;
        if(possible(req, avail, price, rubles, mid)) low = mid+1;
        else high = mid-1; 
    }
    
    cout << high << endl;
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