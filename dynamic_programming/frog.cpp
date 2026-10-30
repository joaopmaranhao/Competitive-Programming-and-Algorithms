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

vector<ll> h;

ll frog(int n, int k){
    vector<int> dp(n, INF);
    dp[0] = 0;

    for(int i = 1; i < n; i++){
        for(int j = max(0, i - k); j < i; j++){
            dp[i] = min(dp[i], dp[j] + abs(h[i] - h[j]));
        }
    }
    return dp[n-1];
}

int main() { _

    int n, k;
    cin >> n >> k;
    h.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> h[i];      
    }
    
    cout << frog(n, k) << endl;

    return 0;
}