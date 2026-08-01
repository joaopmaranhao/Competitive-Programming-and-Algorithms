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

int frog(int i, int n) {
    if (i == n - 1) return 0;

    if (dp[i] != -1) return dp[i];

    int op1 = frog(i + 1, n) + abs(stones[i] - stones[i + 1]);

    int op2 = INF;
    if (i + 2 < n) {
        op2 = frog(i + 2, n) + abs(stones[i] - stones[i + 2]);
    }

    return dp[i] = min(op1, op2);
}

int frogit(int i, int n){
    
    dp.assign(3, 0);

    dp[0] = 0;
    if(n > 1){
        dp[1] = abs(stones[1] - stones[0]);
    }

    for(int i = 2; i < n; i++){
        dp[i%3] = min(
                dp[(i-1)%3] + abs(stones[i] - stones[i-1]), 
                dp[(i-2)%3] + abs(stones[i] - stones[i-2])
            );
    }
    return dp[(n-1)%3];
}

int main() { _

    int n;
    cin >> n;

    stones.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> stones[i];
    }
    cout << frogit(0, n) << endl;

    return 0;
}