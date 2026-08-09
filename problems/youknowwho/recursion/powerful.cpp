#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

using ll = long long;
#define endl '\n'

vector<ll> facts;

ll solve(int i, ll curr, int cf) {
    if (curr < 0) return 1e9;
    if (i == facts.size()) {
        return cf + __builtin_popcountll(curr);
    }
    return min(solve(i + 1, curr, cf), solve(i + 1, curr - facts[i], cf + 1));
}

int main() { _

    ll f = 6;
    for (int i = 4; f <= 1e12; i++) {
        facts.push_back(f);
        f *= i;
    }

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        cout << solve(0, n, 0) << endl;
    }

    return 0;
}