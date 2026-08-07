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

int main() { _

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        if(n == 1) {
            cout << 0 << endl;
            continue;
        }
        if(n == 2){
            cout << 1 << endl;
            continue;
        }

        int k = 63 - __builtin_clzll((ull)n);
        ull p = 1ULL << k;
        ull full = (1ULL << (k+1)) - 1;

        ll ans;
        if(n == (ll)p){
            ans = (ll)(full-1);
        }else{
            ans = (ll)(full);
        }

        cout << (ans%MOD) << endl;
    }

    return 0;
}