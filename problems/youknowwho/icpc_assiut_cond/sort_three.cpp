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

    vector<int> v(3);
    for(int i = 0; i < 3; i++) {
        cin >> v[i];
    }

    vector<int> sorted = v;

    sort(all(sorted));
    for(auto& e : sorted){
        cout << e << endl;
    }
    cout << endl;
    for(auto& e : v){
        cout << e << endl;
    }
    cout << endl;

    return 0;
}