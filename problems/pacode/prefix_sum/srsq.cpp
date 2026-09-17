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

    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(auto& ai : a) cin >> ai;

    vector<ll> p(n+1);
    p[0] = a[0];
    for(int i = 1; i <= n; i++) {
        p[i] = p[i-1] + 1LL * a[i-1];
    }

    while(q--){
        int l, r;
        cin >> l >> r;

        ll ans = p[r] - p[l-1];
        cout << ans << endl;
    }

    return 0;
}