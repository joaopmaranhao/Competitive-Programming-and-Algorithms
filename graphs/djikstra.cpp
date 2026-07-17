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

vector<int> djikstra_shortest_path(const vector<vector<pair<int, int>>>& G, int start, int finish){

    int n = G.size();
    vector<int> dist(n, INF);
    vector<int> shortest;
    //processed nodes building the shortest path
    return shortest;
}

int main(){ _

    int v, e;
    cin >> v >> e;

    vector<vector<pair<int, int>>> wgraph;

    for(int i = 0; i < e; i++){
        int a, b, w;
        cin >> a >> b >> w;

        auto e = make_pair(b, w);
        wgraph[a].pb(e);
    }

    int s, f;
    cin >> s >> f;
    vector<int> shortest = djikstra_shortest_path(wgraph, s, f);

    for(auto& i : shortest){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}