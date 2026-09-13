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

    int n, m;
    cin >> n >> m;

    multiset<int> t;

    for(int i = 0; i < n; i++) {
        int ti;
        cin >> ti;
        t.insert(ti);      
    }

    for(int i = 0; i < m; i++) {
        int c;
        cin >> c;
        
        auto it = t.upper_bound(c);
        if(it != t.begin()){
            it--;
            cout << *it << endl;
            t.erase(it);
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}