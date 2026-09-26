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


int comp;
vector<bool> vis;
vector<int> deg;

void dfs(vector<vector<int>>& g, int v){
    stack<int> s;
    s.push(v);
    vis[v] = true;
    bool iscycle = true;

    if(deg[v] != 2) iscycle = false;

    while(!s.empty()){

        int curr = s.top();
        if(deg[curr] != 2) iscycle = false;
        s.pop();

        for(auto& i : g[curr]){
            if(deg[i] != 2) iscycle = false;
            if(vis[i]) continue;
            vis[i] = true;
            s.push(i);
        }
    }
    if(iscycle) comp++;
    return;
}

int main() { _

    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> g(n);
    vis.assign(n, false);
    deg.assign(n, 0);

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].pb(b);
        g[b].pb(a);
        deg[a]++; deg[b]++;
    }

    comp = 0;
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            dfs(g, i);
        }
    }
    cout << comp << endl;

    return 0;
}