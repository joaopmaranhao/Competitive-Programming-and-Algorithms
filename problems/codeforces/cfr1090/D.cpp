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

bool isprime(ll n) {
    if (n <= 1) return false;
    if (n % 2 == 0) return n == 2;
    for (ll i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;

    return true;
}

vector<int> primes(ll n = 110000){
    vector<bool> prim(n);
    for(int i = 0; i < n; i++){
        if(isprime(i)){
            prim[i] = true;
        }else{
            prim[i] = false;
        }
    }

    vector<int> p;
    for(int i = 0; i < n; i++){
        if(prim[i]) p.pb(i);
    }
    return p;
}

int main() { _

    int t;
    cin >> t;

    vector<int> p = primes();
    
    while (t--) {
        int n;
        cin >> n;

        for(int i = 0; i < n; i++){
            ll a = 1LL * p[i] * p[i+1];
            cout << a << " ";
        }
        cout << endl;
    }

    return 0;
}