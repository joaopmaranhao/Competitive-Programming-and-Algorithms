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

    int t;
    cin >> t;

    while (t--) {
        ll y, x;
        cin >> y >> x;
        ll z = max(y, x);
        ll ans;

        if(z % 2 == 0){
            if(y == z){
                ans = z*z - x + 1;
            }else {
                ans = (z-1) * (z-1) + y;
            }
        }else{
            if(y == z){
                ans = (z-1) * (z-1) + x;
            }else {
                ans = z*z - y + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}