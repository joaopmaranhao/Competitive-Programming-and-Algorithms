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

    string n;
    cin >> n;

    int spells = 0;

    while (n.length() > 1) {
        ll ret = 0;
        for (char c : n) {
            ret += c - '0';
        }
        spells++;
        n = to_string(ret);
    }

    cout << spells << endl;
    return 0;
}