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

    
    freopen("haybales.in", "r", stdin);
    freopen("haybales.out", "w", stdout);
    
    int n, q;
    cin >> n >> q;

    vector<ll> h(n);
    for(int i = 0; i < n; i++) {
        cin >> h[i];      
    }

    sort(all(h));

    while(q--){
        int a, b;
        cin >> a >> b;
        
        auto lb = lower_bound(all(h), a);
        auto hb = upper_bound(all(h), b);
        cout << hb - lb << endl;
    }
    return 0;
}