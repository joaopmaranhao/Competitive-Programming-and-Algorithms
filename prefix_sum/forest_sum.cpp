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
 
        int n;
        cin >> n;
        //criando a floresta
        vector<vector<int>> forest(n, vector<int>(n, 0));

        for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++) {
                        char tmp;
                        cin >> tmp;
                        if(tmp == '.') forest[i][j] = 0;
                        else if(tmp == '*') forest[i][j] = 1;                  
                }        
        }

        vector<vector<int>> prem(n + 1, vector<int>(n + 1, 0));

        for(int i = 1; i < n; i++) {
                for(int j = 1; j < n; i++) {
                        prem[i][j] = forest[i][j] + prem[i - 1][j] + prem[i][j - 1] + prem[i - 1][j - 1];
                }       
        }

        return 0;
}