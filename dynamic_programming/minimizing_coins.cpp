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

vector<ll> c;

ll dp(int n, int x){

    vector<int> dp(x + 1, INF);
    dp[0] = 0;

    for(int s = 1; s <= x; s++){
        for(int i = 0; i < n; i++){
            if(c[i] <= s && dp[s - c[i]] != INF){
                dp[s] = min(dp[s], dp[s - c[i]] + 1);
            }
        }
    }
    return dp[x];
}

int main() { _

    int n, x;
    cin >> n >> x;
    c.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> c[i];      
    }

    cout << dp(n, x) << endl;

    return 0;
}