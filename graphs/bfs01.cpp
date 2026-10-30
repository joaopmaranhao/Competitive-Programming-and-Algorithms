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

void bfs(const vector<vector<int>>& g, int s = 0){

    int n = g.size();
    vector<int> dist(n, INF);

    queue<int> q;
    dist[s] = 0;
    q.push(s);
    
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v : g[u]){
            if(dist[v] == INF){
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << (dist[i] == INF ? -1 : dist[i]) << ' ';
    }
    cout << endl;
}

int main() { _

    int n, e;
    cin >> n >> e;

    //using adj list implementation for graphs
    vector<vector<int>> graph(n);

    while(e--){
        int v, w;
        cin >> v >> w;
        graph[v].pb(w);     
    }

    bfs(graph);

    return 0;
}