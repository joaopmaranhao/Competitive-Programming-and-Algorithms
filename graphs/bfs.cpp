//BFS template by Joao Maranhao

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

void bfs(const vector<vector<int>>& graph, int start = 0){

    vector<bool> visited(graph.size(), false);
    stack<int> s;

    s.push(start);
    visited[start] = true;
    
    while(!s.empty()){
        
        int curr = s.top();
        s.pop();
        
        cout << curr << " "; //processign happens here

        for(int neib = 0; neib < graph.size(); neib++){
            if(visited[neib] || graph[curr][neib] == 0) continue;
            s.push(neib);
            visited[neib] = true;
        }
    }
    cout << endl;
}

int main() { _

    int n, e;
    cin >> n >> e;

    //usign adj matrix implementation for graphs
    vector<vector<int>> graph(n, vector<int>(n, 0));

    while(e--){
        int v, w;
        cin >> v >> w;
        graph[v][w] = 1;     
    }

    bfs(graph);

    return 0;
}