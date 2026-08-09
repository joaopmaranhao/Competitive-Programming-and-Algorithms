#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
using namespace std;

using ll = long long;

ll gcd(ll a, ll b){
    return b == 0 ? a : gcd(b, a%b);
}

int main() { _

    int n;
    cin >> n;

    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];      
    }

    ll gcdall = gcd(v[0], v[1]);
    for(int i = 2; i < n; i++){
        gcdall = gcd(gcdall, v[i]);
    }

    ll ans = 0;
    for(int i = 1; i * i <= gcdall; i++){
        if(gcdall % i == 0) ans++;
        if(i*i != gcdall) ans++;
    }

    cout << ans << endl;
    return 0;
}