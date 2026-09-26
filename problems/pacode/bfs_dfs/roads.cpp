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
void dfs(const vector<vector<int>>& g, int s = 0){
    int n = g.size();
    stack<int> st;

    st.push(s);
    vis[s] = true;
    
    while(!st.empty()){
        
        int curr = st.top();
        st.pop();
        
        //cout << curr << endl;
        
        for(auto& i : g[curr]){
            if(vis[i]) continue;
            st.push(i);
            vis[i] = true;
        }
    }
}

int main() { _
    
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> g(n);
    vis.assign(n, false);

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].pb(b);
        g[b].pb(a);
    }

    
    vector<int> c;
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            c.pb(i+1);
            dfs(g, i);
        }
    }
    
    cout << (c.size() > 0 ? c.size()-1 : 0) << endl;
    for(int i = 0; i < c.size()-1; i++){
        cout << c[i] << " " << c[i+1] << endl;
    }
    return 0;
}