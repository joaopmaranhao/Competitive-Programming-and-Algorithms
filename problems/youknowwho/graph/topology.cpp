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

int main() { _

    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n+1);
    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }

    map<int, int> df;
    for(int i = 1; i <= n; i++){
        int d = g[i].size();
        df[d]++;
    }

    if(df.size() == 1 && df.count(2)){ //todos possuem grau 2
        cout << "ring topology" << endl;
    }else if(df.size() == 2 && df.count(1) && df[1] == 2){ //2 possuem graus 1
        cout << "bus topology" << endl;
    }else if(df.size() == 2 && df.count(n-1) && df[n-1] == 1){
        cout << "star topology" << endl;
    }else{
        cout << "unknown topology" << endl;
    }
    return 0;
}