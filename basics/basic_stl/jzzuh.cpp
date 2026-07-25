#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

using ll = long long;
using llu = unsigned long long;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _

        int n, m;
        queue<pair<int, int>> a;
        cin >> n >> m;
        
        for(int i = 1; i <= n; i++){
                int candies_needed;
                cin >> candies_needed;
                a.push({i, candies_needed});
        }

        pair<int, int> l;
        while(!a.empty()){
                l = a.front(); 
                a.pop();

                if(l.second > m){
                        l.second -= m; // still needs more
                        a.push(l);     // goes to the end
                }
        }

        cout << l.first << endl; 
        return 0;
}
