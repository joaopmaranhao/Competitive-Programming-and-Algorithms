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

ll fast_expo(ll base, ll exp) {
    ll res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % MOD; // Se o bit menos significativo for 1
        base = (base * base) % MOD;
        exp >>= 1; // Equivalente a exp /= 2
    }
    return res;
}

int main() { _

    int t;
    cin >> t;
    cout << fast_expo(2, t) << endl;
    return 0;
}