#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;

using ll = long long;

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main() { _

    int t;
    cin >> t;

    while (t--) {
        ll a, b;
        cin >> a >> b;

        ll ans = gcd(a, b);
        cout << a*b/ans << " " << ans << endl; 
    }

    return 0;
}