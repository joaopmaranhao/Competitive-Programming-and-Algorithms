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

    int n, m;
    cin >> n >> m;

    vector<vector<char>> mat(n, vector<char>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }      
    }

    int x, y;
    cin >> x >> y;
    x--, y--;

    bool ans = true;

    for(int dx = -1; dx <= 1; dx++) {
        for(int dy = -1; dy <= 1; dy++) {
            if(dx == 0 && dy == 0) continue;

            int ni = x + dx;
            int nj = y + dy;

            if(ni >= 0 && ni < n && nj >= 0 && nj < m) {
                if(mat[ni][nj] != 'x') {
                    ans = false;
                }
            }
        }
    }

    cout << (ans ? "yes" : "no") << "\n";
}