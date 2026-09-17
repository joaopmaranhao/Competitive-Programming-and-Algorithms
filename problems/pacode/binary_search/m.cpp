#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

using ll = long long;
using ull = unsigned long long;

#define pb push_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define endl '\n'

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

int main() { _

    int n, t;
    cin >> n >> t;

    vector<ll> k(n);
    for(int i = 0; i < n; i++) {
        cin >> k[i];      
    }

    ll l = 1, r = 2e18;

    while(l < r){
        
        ll m = l + (r-l)/2;
        
        ll p = 0;
        for(ll ki : k) {
            p += m/ki;
            if(p>=t) break;  
        }
        if(p < t) l = m+1;
        else r = m;
    }
    cout << l << endl;

    return 0;
}