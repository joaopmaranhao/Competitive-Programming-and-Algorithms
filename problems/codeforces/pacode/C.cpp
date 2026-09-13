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

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];      
    }

    vector<int> pmx(n), pmn(n);
    vector<int> smx(n), smn(n);

    pmx[0] = pmn[0] = a[0];
    for(int i = 1; i < n; i++){
        pmx[i] = max(pmx[i-1], a[i]);
        pmn[i] = min(pmn[i-1], a[i]);
    }
    smx[n-1] = smn[n-1] = a[n-1];
    for(int i = n-2; i >= 0; i--){
        smx[i] = max(smx[i+1], a[i]);
        smn[i] = min(smn[i+1], a[i]);
    }

    ll ans = 0;
    for(int i = 0; i < n-1; i++) {
        ans = max(ans, 1LL * pmx[i] * smn[i+1]);
        ans = max(ans, 1LL * pmn[i] * smx[i+1]);
    }
    cout << ans << endl;
    return 0;
}