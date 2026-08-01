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

vector<int> coins;
vector<int> dp;

int mincoins(int n, int s){
    dp.assign(s+1, INF);
    dp[0] = 0;
    for(int i = 0; i <= s; i++){
        for(int c : coins){
            if(i-c >= 0) dp[i] = min(dp[i], dp[i-c] + 1);
        }
    }
    return (dp[s] == INF ? -1 : dp[s]);
}

int main() { _

    int n, s;
    cin >> n >> s;

    coins.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> coins[i];      
    }
    cout << mincoins(n, s) << endl;

    return 0;
}