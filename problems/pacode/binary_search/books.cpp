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

    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];      
    }

    int ans = 0;
    ll s = 0;
    int l = 0;

    for(int r = 0; r < n; r++) {
        s += a[r];
        while(s > t){
            s -= a[l];
            l++;
        }
        ans = max(ans, r-l+1);
    }
    cout << ans << endl;
    return 0;
}