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

const int MAXN = 50000;
vector<int> g[MAXN];

void bfs(int s, int m){

    queue<int> q;
    vector<bool> vis(MAXN, false);

    q.push(s);
    vis[s] = true;

    int level = 0;

    bool found = false;

    while(!q.empty()){
        int sz = q.size();        
        for(int i = 0; i < sz; i++){
            int curr = q.front();
            q.pop();

            //cout << curr << endl;

            if(2*curr < MAXN) g[curr].pb(2*curr);
            if(curr > 0) g[curr].pb(curr-1);

            for(int i : g[curr]){
                if(i == m) {
                    found = true;
                    break;
                }
                if(vis[i]) continue;
                q.push(i);
                vis[i] = true;
            }
        }
        level++;
        if(found) break;
    }
    cout << level << endl;
}

int main() { _

    int n, m;
    cin >> n >> m;

    bfs(n, m);
    return 0;
}