#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

using ll = long long;
using ull = unsigned long long;


ll exgcd(ll a, ll b, ll &x, ll &y){
    if(b == 0){
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = exgcd(b, a%b, x1, y1);
    x = y1;
    y = x1 - y1 * (a/b);
    return d;
}

int main() { _

    int t;
    cin >> t;

    while (t--) {
        
    }

    return 0;
}