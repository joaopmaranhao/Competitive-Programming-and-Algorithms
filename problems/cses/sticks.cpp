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

vector<ll> d;

ll divide(ll x, ll n){
    if(n == 1){
        return x;
    }
    ll ans = LINF;
    for(int i = 0; i < n; i++) {
        ans = min(ans, divide(x-i, n-1));
    }
    return ans;
}

int main() { _

    ll x, n;
    cin >> x >> n;
    d.resize(n);

    for(int i = 0; i < n; i++) {
        cin >> d[i];      
    }
    cout << divide(x, n) << endl;
    return 0;
}