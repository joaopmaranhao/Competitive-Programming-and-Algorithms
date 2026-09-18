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

    int t;
    cin >> t;

    queue<int> q;

    while(t--){
        int qt;
        cin >> qt;

        if(qt == 1){
            int n;
            cin >> n;
            q.push(n);
        }else if(qt == 2 && !q.empty()){
            q.pop();
        }else if(qt == 3){
            if(q.empty()) cout << "Empty!" << endl;
            else cout << q.front() << endl;
        }
    }

    return 0;
}