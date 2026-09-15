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
        for(auto& ai : a) cin >> ai;

        vector<ll> p(n+1, 0);
        for(int i = 1; i <= n; i++){
            p[i] = p[i-1] + a[i-1];
        }
        while(q--){
            int l, r, k;
            cin >> l >> r >> k;

            int s = p[n] - (p[r]-p[l-1]) + (ll)(r-l+1) * k;
            cout << (s%2 == 1 ? "YES" : "NO") << endl;
        }
    }

    return 0;
}