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
        int n;
        cin >> n;
        vector<ll> a(n);
        for (auto &x : a) cin >> x;

        ll mxS = a[0], mnS = a[0];
        ll ans = a[0];

        for (int i = 1; i < n; i++) {
            ans = max(ans, a[i] + max(llabs(mxS), llabs(mnS)));

            ll nmx = -LINF, nmn = LINF;
            for (ll s : {mxS, mnS}) {
                for (int k = 0; k <= 2; k++) {
                    ll v = a[i] + k * s;
                    nmx = max(nmx, v);
                    nmn = min(nmn, v);
                }
            }
            mxS = nmx;
            mnS = nmn;
        }
        cout << ans << endl;
    }

    return 0;
}