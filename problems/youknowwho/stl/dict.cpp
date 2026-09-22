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

    map<string, string> d;
    string line;

    while(getline(cin, line) && !line.empty()){
        istringstream iss(line);
        string a, b;
        iss >> a >> b;
        d[b] = a;
    }

    while(getline(cin, line)){
        if(line.empty()) continue;
        if(d.count(line)) cout << d[line] << "\n";
        else cout << "eh\n";
    }

    return 0;
}