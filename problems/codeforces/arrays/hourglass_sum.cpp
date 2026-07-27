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

    vector<vector<int>> m(6, vector<int>(6));

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            cin >> m[i][j];
        }      
    }

    int mx = -INF;
    for(int i = 1; i < 5; i++) {
        for(int j = 1; j < 5; j++){
            int hsuml = m[i-1][j-1] + m[i-1][j] + m[i-1][j+1] + m[i][j] + m[i+1][j-1] + m[i+1][j] + m[i+1][j+1];
            mx = max(mx, hsuml);  
        }
    }
    cout << mx << endl;

    return 0;
}