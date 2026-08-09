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
     
        ll n;
        cin >> n;

        ll a, b, c;
        a = b = c = -1;

        for(ll i = 2; i * i <= n; i++) {
            if(n%i == 0){
                a = i;
                break;
            }
        }
        if(a == -1){
            cout << "NO" << endl;
            continue;
        }
        ll rem = n/a;

        for(ll i = a + 1; i * i <= rem; i++) {
            if(rem%i == 0){
                b = i;
                break;
            }
        }
        if(b != -1){
            c = rem/b;
        }
        if (b == -1 || c <= b || c == a) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
    }

    return 0;
}