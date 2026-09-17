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

    int n; 
    ll x;
    cin >> n >> x;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];      
    }

    vector<ll> p(n+1); p[0] = 0;
    for(int i = 1; i <= n; i++) {
        p[i] = p[i-1] + a[i-1];      
    }

    map<ll, int> m;
    m[0] = 1;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ll t = p[i+1] - x;
        ans += m[t];
        m[p[i+1]]++;
    }
    cout << ans << endl;
    return 0;
}