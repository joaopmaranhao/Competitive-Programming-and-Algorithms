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

    int n, q;
    cin >> n >> q;

    multiset<int> m;
    for(int i = 0; i < n; i++) {
        int t; cin >> t;
        m.insert(t);      
    }

    while(q--){
        int t;
        cin >> t;   

        if(t == 0){
            int x;
            cin >> x;
            m.insert(x);
        }else if(t == 1){
            auto it = m.begin();
            cout << *it << endl;
            m.erase(it);
        }else if(t == 2){
            auto it = prev(m.end());
            cout << *it << endl;
            m.erase(it);
        }
    }

    return 0;
}