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

ll xor0(ll n){
    ll ans[] = {n, 1, n+1, 0};
    return ans[n%4];
}

int main() { _

    ll a, b;
    cin >> a >> b;

    a = (a == 0) ? 0 : xor0(a - 1);
    cout << (xor0(b) ^ a) << endl;
    return 0;
}