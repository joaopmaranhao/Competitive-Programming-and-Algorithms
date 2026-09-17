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
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];      
    }

    vector<ll> p(n+1); p[0] = 0;
    for(int i = 1; i <= n; i++) {
        p[i] = p[i-1] + a[i-1];      
    }
    ll ans = 0;
    // (p[r] - p[l-1]) mod n == 0

    for(int i = 1; i <= n; i++){
        if((p[i] - p[0]) % n == 0) ans++;
    }   
    for(int i = 0; i <= n; i++){
        if((p[n+1] - p[i]) % n == 0) ans++;
    }
    cout << ans << endl;
    return 0;
}