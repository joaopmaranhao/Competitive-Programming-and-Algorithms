#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void bfs(const vector<vector<int>>& G, int start = 0){

vector<bool> visited(G.size(), false);
queue<int> q;
//queue
q.push(start);
visited[start] = true;

while(!q.empty()){

        int curr = q.front();

        cout << curr << " "; //process the node here

        q.pop();

        //exploring the neibghours
        for(int neib : G[curr]){
                if(visited[neib]) continue;
                visited[neib] = true;
                q.push(neib);
        }
}
cout << endl;
}

int main(){ _

        int v, e; 
        cin >> v >> e;

        // Fixed: Initializing an empty adjacency list for v vertices
        vector<vector<int>> graph(v); 

        for(int i = 0; i < e; i++){
                int a, b, w;
                cin >> a >> b >> w; // w can be saved in a pair if weights are needed later

                graph[a].pb(b); 
        }

        bfs(graph);

        return 0;
}       