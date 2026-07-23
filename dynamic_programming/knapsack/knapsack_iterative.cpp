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

struct item {
    ll w, v;
    item(ll w_, ll v_) : w(w_), v(v_) {}
};

vector<item> items;
vector<vector<ll>> memo;

vector<bool> picked;

//returns optimal value of the knapsack

ll knapsack(int n, int m) {
    memo.assign(n + 1, vector<ll>(m + 1, 0));

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 || j == 0) {
                memo[i][j] = 0;
            } 
            else if (items[i - 1].w <= j) {
                memo[i][j] = max(items[i - 1].v + memo[i - 1][j - items[i - 1].w], memo[i - 1][j]);
            } 
            else {
                memo[i][j] = memo[i - 1][j];
            }
        }
    }
    return memo[n][m];
}

int main() { _

    int n, w;
    cin >> n >> w;

    for(int i = 0; i < n; i++) {
        ll wi, vi;
        cin >> wi >> vi;
        items.pb(item(wi, vi));      
    }

    cout << knapsack(n, w) << endl;

    return 0;
}