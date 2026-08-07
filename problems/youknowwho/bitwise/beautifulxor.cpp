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
        ll a, b;
            cin >> a >> b;

            if (a == b) {
                cout << 0 << endl << endl;
                continue;
            }

            int msb_a = __lg(a);
            int msb_b = __lg(b);

            if (msb_a < msb_b) {
                cout << -1 << endl;
                continue;
            }

            if ((a ^ b) <= a) {
                cout << 1 << endl;
                cout << (a ^ b) << endl;
                continue;
            }

            ll mask = (1LL << msb_a) - 1;
            ll a_prime = (1LL << msb_a) | (b & mask);

            ll x1 = a ^ a_prime;
            ll x2 = a_prime ^ b;

            cout << 2 << endl;
            cout << x1 << " " << x2 << endl;
    }

    return 0;
}