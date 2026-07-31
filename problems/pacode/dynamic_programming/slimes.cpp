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

vector<ll> s;

ll slimes(int n){
    
    vector<vector<ll>> dp(n, vector<ll>(n, LINF));

    for(int i = 0; i < n; i++) {
        dp[i][i] = 0;
    }

    for(int len = 2; len <= n; len++){
        for(int l = 0; l <= n - len; l++){
            int r = l + len - 1;

            ll sum = 0;
            for(int i = l; i <= r; i++) {
                sum += s[i];
            }
            for(int k = l; k < r; k++){
                dp[l][r] = min(dp[l][r], dp[l][k] + dp[k+1][r] + sum);
            }
        }
    }

    return dp[0][n-1];
}

int main() { _

    int n;
    cin >> n;

    s.resize(n);

    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    cout << slimes(n) << endl;

    return 0;
}