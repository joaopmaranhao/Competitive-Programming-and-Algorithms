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

vector<int> v;

ll div(int n, ll a, ll b){
    if(n == 0){
        return abs(a-b);
    }
    return min(div(n-1, a + v[n-1], b), div(n-1, a, b + v[n-1]));
}

int main() { _

    int n;
    cin >> n;

    v.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << div(n, 0, 0) << endl;

    return 0;
}