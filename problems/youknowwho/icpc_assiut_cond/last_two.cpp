#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;
using ll = long long;


const int MOD = 100;

int main() { _

   
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans = a % 100;
    ans = (ans * (b%100)) % 100;
    ans = (ans * (c%100)) % 100;
    ans = (ans * (d%100)) % 100;

    cout << setfill('0') << setw(2) << ans << endl;

    return 0;
}