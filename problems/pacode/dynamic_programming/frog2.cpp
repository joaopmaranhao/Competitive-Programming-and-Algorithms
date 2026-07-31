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

vector<int> stones;
vector<int> dp;

int frog(int i, int n, int k){

    if (i == n - 1) return 0;
    if (dp[i] != -1) return dp[i];

    int minc = INF;

    for(int j = 1; j <= k; j++){
        if(i + j >= n) break;
        int cost = frog(i+j, n, k) + abs(stones[i] - stones[i+j]);
        minc = min(minc, cost);
    }

    return dp[i] = minc;
}

int frogit(int n, int k){
    dp.assign(k, INF);
    dp[0] = 0;

    for(int i = 0; i < n; i++){
        if (dp[i] == INF) continue;

        for(int j = 1; j <= k; j++){
            if(i + j >= n) break;
            dp[i+j] = min(dp[i+j], dp[i] + abs(stones[i] - stones[i+j]));
        }
    }

    return dp[n-1];
}

int main() { _

    int n, k;
    cin >> n >> k;

    stones.resize(n);
    for(int i = 0; i < n; i++){
        cin >> stones[i];
    }

    cout << frogit(n, k) << endl;

    return 0;
}