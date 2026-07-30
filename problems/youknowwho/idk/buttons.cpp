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

    int a, b;
    cin >> a >> b;

    int op1 = 2*a - 1;
    int op2 = a + b;
    int ans = max(op1, op2);
    int op3 = 2*b - 1;
    ans = max(ans, op3);

    cout << ans << endl;

    return 0;
}