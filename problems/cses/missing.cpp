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

    ll n;
    cin >> n;

    vector<ll> v(n-1, 0);
    
    ll sum = 0;
    for(int i = 0; i < n-1; i++) {
        cin >> v[i];
        sum += v[i];
    }

    ll missing = ((n*(n+1))/2) - sum;
    cout << missing << endl;

    return 0;
}