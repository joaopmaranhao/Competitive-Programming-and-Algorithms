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

    set<int> s;
    int mx = -INF;

    while(n--){
        int m;
        cin >> m;

        int nr = 0;
        for(int i = 0; i < m; i++){
            int r; cin >> r;
            if(s.find(r) != s.end()) continue;
            s.insert(r);
            nr++;
        }
        cout << endl;
        mx = max(mx, nr);
    }

    cout << mx << endl;

    return 0;
}