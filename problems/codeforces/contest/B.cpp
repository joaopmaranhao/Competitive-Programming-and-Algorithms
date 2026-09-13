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
        int n, k;
        cin >> n >> k;

        if(k < n || k >= 2*n){
            cout << -1 << endl;
            continue;
        }

        vector<vector<int>> ans(n, vector<int>(n, 0));

        ans[0][0] = 1;

        int x = k - n;
        for(int i = 1; i <= x; i++){
            ans[i][0] = i + 1;
        }
        for(int i = 1; i <= x; i++){
            ans[i][i] = n + i;
        }
        for(int i = x + 1; i < n; i++){
            ans[i][i] = i + 1;
        }

        vector<bool> used(n*n + 1, false);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(ans[i][j] != 0)
                    used[ans[i][j]] = true;
            }
        }

        int ctr = 1;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(ans[i][j] != 0) continue;

                while(used[ctr]) ctr++;

                ans[i][j] = ctr;
                used[ctr] = true;
            }
        }       

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}