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

    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];      
    }

    vector<ll> p(n+1); p[0] = 0;
    for(int i = 1; i <= n; i++) {
        p[i] = p[i-1] + v[i-1];
    }
    ll mxsum = -INF;
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++) {
            ll sum = p[j+1] - p[i]; 
            if(sum % 7 == 0 && mxsum < sum){
                ans = j - i + 1;
                mxsum = sum;
            }
        }
    }
    cout << ans << endl;

    return 0;
}