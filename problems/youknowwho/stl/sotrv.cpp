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

    int n;
    ll x;
    cin >> n >> x;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];      
    }

    map<ll, int> m; // map <value, index>
    bool found1 = false;
    int ans[] = {0, 0, 0};
    for(int i = 0; i < n; i++) {
        ll c = x - a[i];
        if(m.count(c)){
            ans[0] = m[c];
            ans[1] = i + 1;
        }
        m[c] = i+1;
        ll c2 = x - a[ans[1]] - a[i];
        if(m.count(c2)){
            ans[2] = i+1;
            cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
            return 0;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}