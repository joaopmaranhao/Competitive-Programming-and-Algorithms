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

vector<bool> sieve(int n){
    vector<bool> primes(n + 1, true);
    primes[0] = primes[1] = false;
    for(int i = 2; i <= n; i++){
        if(primes[i] && (ll)i*i <= n){
            for(int j = i*i; j <= n; j += i){
                    primes[j] = false;
            }
        }
    }
    return primes;
}


int main() { _

    int n;
    cin >> n;
    vector<bool> p = sieve(1e6);
    while(n--){

        ll x;
        cin >> x;

        int rt = -1;
        int l = 0, r = 1e6;
        while(l <= r){
            ll m = l + (r-l)/2;

            if(m*m == x){
                rt = m;
                break;
            }
            else if(m*m < x) l = m+1;
            else r = m-1;
        }
        cout << (rt != -1 && p[rt] ? "YES" : "NO") << endl;
    }
    return 0;
}