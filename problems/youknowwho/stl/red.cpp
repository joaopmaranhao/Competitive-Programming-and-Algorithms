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

    vector<int> ord;
    map<ll, ll> m;
    ll t;
    while(cin >> t){
        if(m[t] == 0)ord.pb(t);  
        m[t]++;
    }

    for(ll i : ord){
        cout << i << " " << m[i] << endl;
    }

    return 0;
}