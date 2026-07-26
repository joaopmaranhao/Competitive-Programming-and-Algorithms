#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

using ll = long long;
#define endl '\n'

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

int main() { _


    ll a, b, c;
    cin >> a >> b >> c;

    ll mn = min(a, min(b, c));
    ll mx = max(a, max(b, c));

    cout << mn << " " << mx << endl;

    return 0;
}