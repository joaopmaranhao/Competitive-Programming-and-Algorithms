#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
using ll = long long;

vector<ll> w, v;

// Returns the maximum value obtainable using the first n items.
ll knapsack(int n, ll m) { _
    if (n == 0 || m == 0) {
        return 0;
    }
    if (w[n-1] > m) {
        return knapsack(n-1, m);
    }
    //chooses to either pick the item or no
    return max(knapsack(n-1, m - w[n-1]) + v[n-1],
               knapsack(n-1, m));
}

int main() {
    int n;
    ll m;
    cin >> n >> m;

    w.resize(n);
    v.resize(n);

    for (int i = 0; i < n; ++i) {
        cin >> w[i] >> v[i];
    }

    cout << knapsack(n, m) << '\n';
    return 0;
}
