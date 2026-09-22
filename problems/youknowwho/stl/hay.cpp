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

    int m, n;
    cin >> m >> n;

    map<string, double> mp;
    for(int i = 0; i < m; i++) {
        string x; double y;
        cin >> x >> y;
        mp[x] = y;
    }
    cin.ignore();

    while(n--) {
        double ans = 0;
        string line;
        while(getline(cin, line)) {
            if(line == ".") break;
            istringstream iss(line);
            string tmp;
            while(iss >> tmp) ans += mp[tmp];
        }
        cout << (long long)ans << "\n";
    }
}