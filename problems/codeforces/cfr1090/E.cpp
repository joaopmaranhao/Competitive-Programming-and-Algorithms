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

    int t;
    cin >> t;

    while (t--) {
     
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;
        int mask = 0;

        for(int b = 29; b >= 0; b--){
            mask |= (1<<b);

            unordered_set<int> pref;
            for(int x : a){
                pref.insert(x & mask);
            }

            int c = ans | (1<<b);
            for(int p : pref){
                if(pref.count(p^c)){
                    ans = c;
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}