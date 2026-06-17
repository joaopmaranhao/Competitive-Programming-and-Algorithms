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

int main(){ _
 
        int n, q;
        cin >> n >> q;
        //criando a floresta
        vector<vector<int>> forest(n + 1, vector<int>(n + 1, 0));

        for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++) {
                        char tmp;
                        cin >> tmp;
                        
                        forest[i][j] += tmp == '*';
                }        
        }

        vector<vector<int>> prem(n + 1, vector<int>(n + 1, 0));

        for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= n; j++) {
                        prem[i][j] = forest[i][j] + prem[i - 1][j] + prem[i][j - 1] - prem[i - 1][j - 1];
                }       
        }

        while(q--){
                int y1, x1, y2, x2;     
                cin >> y1 >> x1 >> y2 >> x2;

                cout << prem[y2][x2] - prem[y1 - 1][x2] - prem[y2][x1 - 1] + prem[y1 - 1][x1 - 1] << endl;
        }

        return 0;
}