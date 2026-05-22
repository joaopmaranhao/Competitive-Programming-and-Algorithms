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

int main(){

        int n, m;
        queue<pair<int, int>> a;
        cin >> n >> m;
        
        pair<int, int> tmpp;
        for(int i = 0; i < n; i++){
                cin >> tmpp.first;
                tmpp.second = tmpp.first;
                a.push(tmpp);
        }
        pair<int, int> l;
        while(!a.empty()){
                l = a.front();

                if(l.second < m){
                        a.pop();
                        l.second -= m;
                        a.push(l); //takes candies and goes to the end of the queue
                }else if(l.second >= m){
                        a.pop(); //takes candies and go home
                }
        }

        cout << l.first << endl;
}