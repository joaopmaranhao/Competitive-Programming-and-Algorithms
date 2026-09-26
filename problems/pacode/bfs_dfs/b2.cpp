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

const int MAXN = 20001;

int main() { _

    int n, m;
    cin >> n >> m;

    vector<bool> vis(MAXN, false);
    queue<int> q;

    q.push(n);
    vis[n] = true;

    int level = 0;
    while(!q.empty()){
        int sz = q.size();

        for(int i = 0; i < sz; i++) {
            int curr = q.front();
            q.pop();
            if(curr == m){
                cout << level << endl;
                return 0;
            }
            int next[2] = {2*curr, curr-1};

            for(int neib : next){
                if(neib <= 0 || neib >= MAXN) continue;
                if(vis[neib]) continue;
                vis[neib] = true;
                q.push(neib);
            }
        }
        level++;
    }

    return 0;
}