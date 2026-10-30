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

vector<ll> h;

ll cost(int n){
    ll ans = h[i];
    for(int i = 1; i < n; i++){
        if(i + 2 )
        ll op1 = abs(h[i] - h[i+1]);
        ll op2 = abs(h[i] - h[i+2]);
        ans += min(op1, op2);
    }
    return ans;
}

int main() { _

    int n;
    cin >> n;
    h.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> h[i];      
    }

    cout << cost(n) << endl;
    return 0;
}