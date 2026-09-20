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

    int q; 
    cin >> q;

    set<int> s;
    while(q--){
        int t;
        cin >> t;

        if(t == 1){
            int x;
            cin >> x;
            s.insert(x);
        }else if(t == 2){
            int x;
            cin >> x;
            s.erase(x);
        }else{
            int x;
            cin >> x;
            auto it = s.find(x);
            cout << (it != s.end() ? "Yes" : "No") << endl;  
        }
    }
    return 0;
}