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

vector<ll> k;

bool valid(ll m, ll t){
    ll sum = 0;
    for(auto& ki : k){
        sum += ki/m;
        if(sum >= t) break;
    }
    return sum >= t;
}


int main() { _

    int n;
    ll t;
    cin >> n >> t;

    k.resize(n);
    for(auto& ki : k) cin >> ki;

    ll lo = 1, hi = 2e18, ans = 0;

    while(lo <= hi){
        ll m = lo + (hi - lo) / 2;
        if(valid(m, t)){
            ans = m;      
            hi = m - 1;
        } else {
            lo = m + 1;
        }
    }

    cout << ans << endl;

    return 0;
}