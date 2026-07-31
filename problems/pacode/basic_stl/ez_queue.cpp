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
    _
    
    int t;
    queue<ll> q;
    
    cin >> t;
    
    while(t--){
        int qt;
        cin >> qt;
        
        if(qt == 1){
            ll n;
            cin >> n;
            q.push(n);
        }else if(qt == 2 && !q.empty()){
            q.pop();
        }else if(qt == 3){
            if(q.empty()) {
                cout << "Empty!" << endl;
            }else{
            cout << q.front() << endl;
            }
        }
    }
}