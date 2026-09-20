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

    map<string, int> m;
    while(q--){
        int t;
        string x;
        cin >> t >> x;

        if(t == 1){
            int y;
            cin >> y;
            m[x] += y;
        }else if(t == 2){
            m[x] = 0;
        }else{
            cout << m[x] << endl;
        }
    }

    return 0;
}