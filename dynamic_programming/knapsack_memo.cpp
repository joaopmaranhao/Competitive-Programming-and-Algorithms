#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
using ll = long long;

vector<ll> w, v;
vector<vector<ll>> memo;

ll knapsack(int n, ll m) {
    if (n == 0) {
        return 0;
    }
    ll& ans = memo[n][m];
    if (ans != -1) {
        return ans;
    }
    ans = knapsack(n - 1, m);
    if (w[n - 1] <= m) {
        ans = max(ans, knapsack(n-1, m - w[n-1]) + v[n-1]);
    }
    return ans;
}

int main() { _
    int n;
    ll m;
    cin >> n >> m;

    w.resize(n);
    v.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> w[i] >> v[i];
    }

    memo.assign(n + 1, vector<ll>(m + 1, -1));
    cout << knapsack(n, m) << '\n';
    return 0;
}
