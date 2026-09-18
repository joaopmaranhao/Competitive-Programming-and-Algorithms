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
    
    //freopen("bcount.in", "r", stdin);
    //freopen("bcount.out", "w", stdout);

    int n, q;
    cin >> n >> q;
    vector<int> c(n);
    for(auto& ci : c){
        cin >> ci;
    }

    vector<int> h(n+1), g(n+1), j(n+1);
    h[0] = g[0] = j[0] = 0;
    for(int i = 1; i <= n; i++){
        h[i] = h[i-1] + (c[i-1] == 1 ? 1 : 0);
        g[i] = g[i-1] + (c[i-1] == 2 ? 1 : 0);
        j[i] = j[i-1] + (c[i-1] == 3 ? 1 : 0);
    }

    while(q--){
        int a, b;
        cin >> a >> b;

        cout << h[b] - h[a-1] << " " 
            << g[b] - g[a-1] << " " 
            << j[b] - j[a-1] << endl;
    }

    return 0;
}