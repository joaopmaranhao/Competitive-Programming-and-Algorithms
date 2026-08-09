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

    ll n, k;
    cin >> n >> k;

    vector<ll> divs;

    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divs.pb(i);
            if (i * i != n) {
                divs.pb(n/i);
            }
        }
    }

    sort(all(divs));

    if(k <= (ll)divs.size()){
        cout << divs[k-1] << endl;
    }else{
        cout << -1 << endl;
    }

    return 0;
}