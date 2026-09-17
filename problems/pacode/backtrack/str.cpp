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

vector<bool> used;
string c;
vector<string> p;
int n;

void bt(string s) {
    if(c.size() == n){
        p.pb(c);
        return;
    }

    for(int i = 0; i < n; i++){
        if(used[i]) continue;
        if(i > 0 && s[i] == s[i-1] && !used[i-1]) continue;

        c.pb(s[i]);
        used[i] = true;

        bt(s);

        c.pop_back();
        used[i] = false;
    }
}

int main() { _

    string s;
    cin >> s;

    n = s.size();
    sort(all(s));
    used.assign(n, false);

    bt(s);

    cout << p.size() << endl;
    for(auto& pi : p) cout << pi << endl;

    return 0;
}