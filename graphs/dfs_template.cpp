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

void dfs(const vector<vector<int>>& G, int start = 0){

    vector<bool> visited(G.size(), false);
    stack<int> s;
    //stack
    s.push(start);

    while(!s.empty()){

        int curr = s.top();
        s.pop();
        
        if(visited[curr]) continue;
        visited[curr] = true;

        cout << curr << " "; //process the node here

        //exploring the neibghours
        for(int neib : G[curr]){
            if(visited[neib]) continue;
            s.push(neib);
        }
    }
    cout << endl;
}

int main(){ _

    int v, e; 
    cin >> v >> e;

    vector<vector<int>> graph(v); 

    for(int i = 0; i < e; i++){
        int a, b;
        cin >> a >> b; // w can be saved in a pair if weights are needed later

        graph[a].pb(b); 
    }

    dfs(graph);

    return 0;
}       