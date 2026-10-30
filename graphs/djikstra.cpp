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

vector<int> djikstra(const vector<vector<pair<int, int>>>& graph, int s = 0, int t = -1){

    int n = graph.size();
    if(t == -1) t = n - 1;
    vector<int> dist(n, INF);
    priority_queue<pair<int, int>, 
                    vector<pair<int, int>>,
                    greater<pair<int, int>>> pq;
    
    dist[s] = 0;
    pq.push({0, s});
    vector<int> parent(n, -1);

    while(!pq.empty()){
        auto [w, u] = pq.top();
        pq.pop();
        if(w > dist[u]) continue;
        for (auto [v, P] : graph[u]){
            if (dist[u] + P < dist[v]){
                dist[v] = dist[u] + P;
                parent[v] = u; 
                pq.push({dist[v], v});
            }
        }
    }

    vector<int> path;
    if(dist[t] == INF) return path;
    for(int v = t; v != s; v = parent[v]){
        path.pb(v);
    }
    path.pb(s);
    reverse(all(path));

    return path;
}

int main() { _

    int n, e;
    cin >> n >> e;

    //usign adj matrix implementation for graphs
    vector<vector<pair<int, int>>> graph(n);

    while(e--){
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].pb({v, w});
        graph[v].pb({u, w});     
    }

    vector<int> path = djikstra(graph);

    return 0;
}