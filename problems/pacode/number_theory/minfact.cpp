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

ll fact(ll n){
    ll ans = 1;
    for(int i = 2; i <= n; i++) {
        ans *= i;
    }
    return ans;
}

int main() { _

    ll a, b;
    cin >> a >> b;

    cout << fact(min(a, b)) << endl;
    
    return 0;
}