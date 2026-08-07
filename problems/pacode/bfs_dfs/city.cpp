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

void dfs(int i, vector<vector<int>>& graph, vector<bool>& visited){
    visited[i] = true;
    for(int neib : )
}

int main() { _

    int n, m;
    cin >> n >> m;

    cout << (m < n-1 ? 0 : n-1-m) << endl;
    
    vector<vector<int>> byteland(n+1);

    while(m--){
        int v, w;
        cin >> v >> w;
        byteland[v].pb(w);
        byteland[w].pb(v);
    }

    vector<bool> visited(n, false);
    vector<int> rep;
    
    for(int i = 0; i <= n; i++){
        if(visited[i]) continue;
        rep.pb(i);
        dfs(i, byteland, visited);
    }
    return 0;
}