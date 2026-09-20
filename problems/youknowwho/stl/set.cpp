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

const int MAXV = 10001;
bitset<1000> bs[MAXV];

int main() { _

    int n;
    cin >> n;
    for(int k = 0; k < n; k++){
        int c; cin >> c;
        for(int j = 0; j < c; j++){
            int x; cin >> x;
            bs[x].set(k);
        }
    }

    int q; cin >> q;
    while(q--){
        int i, j;
        cin >> i >> j;
        cout << ((bs[i] & bs[j]).any() ? "Yes" : "No") << "\n";
    }
    return 0;
}