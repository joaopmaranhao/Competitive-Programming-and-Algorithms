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


vector<string> tab(8);
vector<bool> col(8, false);
vector<bool> diag1(16, false); 
vector<bool> diag2(16, false);

int solve(int row) {
    if (row == 8) {
        return 1;
    }

    int total_ways = 0;

    for (int c = 0; c < 8; c++) {
        if (tab[row][c] == '*') continue;
        if (col[c] || diag1[row + c] || diag2[row - c + 7]) continue;

        col[c] = diag1[row + c] = diag2[row - c + 7] = true;
        total_ways += solve(row + 1);
        col[c] = diag1[row + c] = diag2[row - c + 7] = false;
    }

    return total_ways;
}

int main() { _

    for (int i = 0; i < 8; i++) {
        cin >> tab[i];
    }

    cout << solve(0) << endl;

    return 0;
}