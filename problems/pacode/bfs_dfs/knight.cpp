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


int bfs(string s, string d){

    if(s == d) return 0;

    int dx[] = {1, 1, -1, -1, 2, 2, -2, -2};
    int dy[] = {2, -2, 2, -2, 1, -1, 1, -1};;


    int rs = s[0] - 'a';
    int cs = s[1] - '1';

    int rd = d[0] - 'a';
    int cd = d[1] - '1';

    queue<pair<int, int>> q;
    vector<vector<bool>> vis(8, vector<bool>(8, false));

    q.push({rs, cs});
    vis[rs][cs] = true;

    int ans = 0;
    while(!q.empty()){
        int sz = q.size();

        for(int i = 0; i < sz; i++){
            pair<int, int> curr = q.front();
            vis[curr.F][curr.S] = true;
            q.pop();

            if(curr.F == rd && curr.S == cd) return ans;

            for(int i = 0; i < 8; i++){
                int nx = curr.F + dx[i];
                int ny = curr.S + dy[i];

                if(nx < 0 || nx >= 8 || ny < 0 || ny >= 8) continue;
                if(vis[nx][ny]) continue;
                q.push({nx, ny});
                vis[nx][ny] = true;
            }
        }
        ans++;
    }
    return -1;
}

int main() { _

    int t;
    cin >> t;

    while(t--){

        string s, d;
        cin >> s >> d;

        int ans = bfs(s, d);

        cout << ans << endl;
    }



    return 0;
}