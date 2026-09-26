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

vector<bool> vis;
void dfs(vector<vector<int>>& g, int v){
    vis[v] = true;
    for(int n : g[v]){
        if(!vis[n]) dfs(g, n);
    }
}

int main() { _

    int n, m;
    cin >> n >> m;

    if(n != m) {
        cout << "NO" << endl;
        return 0;
    }

    vis.assign(n, false);
    vector<vector<int>> g(n);
    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;y--;
        g[x].pb(y);
        g[y].pb(x);
    }

    dfs(g, 0); 
    bool conexo = true;
    for(int i = 0; i < n; i++) if(!vis[i]) conexo = false;
    cout << (conexo ? "FHTAGN!" : "NO") << endl;
    return 0;
}