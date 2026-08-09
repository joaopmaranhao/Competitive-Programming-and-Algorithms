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

bool reach(ll n){
    if(n == 1) return true;
    if(n < 1) return false;

    if(n % 20 == 0 && reach(n/20)) return true; 
    if(n % 10 == 0 && reach(n/10)) return true;

    return false;
}

int main() { _

    int t;
    cin >> t;

    while (t--) {
     
        ll n;
        cin >> n;
        cout << (reach(n) ? "YES" : "NO") << endl;
    }

    return 0;
}