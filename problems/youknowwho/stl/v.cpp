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

    vector<int> v;

    while(q--) {

        int qt;
        cin >> qt;

        if(qt == 0){
            int x;
            cin >> x;
            v.pb(x);

        }else if(qt == 1){
            int p;
            cin >> p;
            cout << v[p] << endl;

        }else if(qt == 2){
            v.pop_back();
            
        }
    }
    return 0;
}