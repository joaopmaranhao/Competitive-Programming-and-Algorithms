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

    int t;
    cin >> t;

    while (t--) {
     
        int n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];      
        }

        ll c = 0;
        vector<ll> mp(n);
        vector<ll> p(n+1); p[0] = 0;
        for(int i = 0; i < n; i++) {
            p[i+1] = p[i] + a[i];
            c = max(c, a[i]);
            mp[i] = c;       
        }

        while(q--){
            ll k;
            cin >> k;
            int i = upper_bound(all(mp), k) - mp.begin();
            cout << p[i] << " ";
        }
        cout << endl;
    }

    return 0;
}