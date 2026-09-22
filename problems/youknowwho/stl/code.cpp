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

    map<pair<int, int>, string> m;
    while (n--) {
        int a, b;
        string nm;
        cin >> a >> b >> nm;

        m[{a, b}] = nm;
    }

    int q;
    cin >> q;

    while(q--){
        int a, b;
        cin >> a >> b;

        cout << m[{a, b}] << endl;
    }

    return 0;
}