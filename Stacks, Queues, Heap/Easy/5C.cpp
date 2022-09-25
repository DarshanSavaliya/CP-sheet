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
    string s;
    cin >> s;
    int n = s.size();
    
    stack<int> st;
    vi d(n, -1);
    int maxi = 0;
    int cnt = 1;

    for(int i=0; i<n; i++) {
        if(s[i] == '(') { 
            st.push(i);
            d[i] = 0;
        }
        else {
            if(st.empty()) d[i] = 0;
            else {
                int len = i-st.top()+1;
                if(st.top()>0) d[i] = d[st.top()-1]+len;
                else d[i] = len;
                if(d[i] > maxi) maxi = d[i], cnt=1;
                else if(d[i] == maxi) cnt++;
                st.pop();
            }
        }
    }

    cout << maxi << " " << cnt << endl;
    
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