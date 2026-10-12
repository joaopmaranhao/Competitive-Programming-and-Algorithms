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


vector<vector<char>> mz;
int s[2];
int n, m;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
char dc[] = {'U', 'D', 'L', 'R'};

string bfs(vector<vector<char>>& mz){

    vector<vector<bool>> vis(n, vector<bool>(m, false));
    queue<pair<int, int>> q;
    
    q.push({s[0], s[1]});
    vis[s[0]][s[1]] = true;

    vector<vector<pair<int,int>>> p(n, vector<pair<int,int>>(m, {-1,-1}));
    vector<vector<char>> dir(n, vector<char>(m, 0));

    
    while(!q.empty()){
        pair<int, int> curr = q.front();
        q.pop();
        
        if(mz[curr.F][curr.S] == 'B'){
            string path = "";
            pair<int,int> cur = {curr.F, curr.S};
            while(cur != make_pair(s[0], s[1])){
                path += dir[cur.F][cur.S];
                cur = p[cur.F][cur.S];
            }
            reverse(path.begin(), path.end());
            return path;
        }

        for(int i = 0; i < 4; i++){
            int ni = curr.F + dx[i];
            int nj = curr.S + dy[i];

            if(ni < 0 || ni >= n || nj < 0 || nj >= m) continue;
            if(mz[ni][nj] == '#') continue;
            if(vis[ni][nj] == true) continue;

            p[ni][nj] = {curr.F, curr.S};
            dir[ni][nj] = dc[i];
            q.push({ni, nj});
            vis[ni][nj] = true;
        }
    }
    return "NO";
}

int main() { _

    cin >> n >> m;
    vector<vector<char>> mz(n, vector<char>(m, 0));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mz[i][j];
            if(mz[i][j] == 'A'){
                s[0] = i;
                s[1] = j;
            }
        }      
    }

    string ans = bfs(mz);

    bool found = (ans != "NO");
    cout << (found ? "YES" : "NO") << endl;
    if(found){
        cout << ans.size() << endl;
        cout << ans << endl;
    }

    return 0;
}