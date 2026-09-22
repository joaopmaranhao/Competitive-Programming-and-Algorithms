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

    int n; ll x;
    cin >> n >> x;
    vector<ll> v(n); 
    for(int i = 0; i < n; i++) cin >> v[i];

    map<ll, int> m;
    for(int i = 0; i < n; i++) {
        ll c = x - v[i];
        if(m.count(c)){
            cout << m[c] << " " << (i + 1) << endl; 
            return 0;
        }
        m[v[i]] = i + 1;
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}