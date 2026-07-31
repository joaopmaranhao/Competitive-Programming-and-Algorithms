#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
using ll = long long;

vector<ll> w, v;

ll knapsack(int n, ll m) {
    vector<vector<ll>> dp(n+1, vector<ll>(m+1));

    for (int i = 1; i <= n; i++) {
        for (ll j = 0; j <= m; j++) {
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }else if(w[i-1] > j){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = max(dp[i][j], dp[i-1][j - w[i-1]] + v[i-1]);
            }
        }
    }
    return dp[n][m];
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

    cout << knapsack(n, m) << endl;
    return 0;
}