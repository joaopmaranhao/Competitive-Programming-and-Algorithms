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

    string s;
    cin >> s;

    vector<int> v;
    for(auto c : s){
        if(c == 'a') v.pb(1);
        else v.pb(0);
    }

    vector<int> p(s.size()+1);

    p[0] = 0;
    for(int i = 1; i <= s.size(); i++) {
        p[i] = p[i-1] + v[i-1];
    }
    
    int q;
    cin >> q;

    while(q--){
        int l, r;
        cin >> l >> r;
        cout << p[r] - p[l-1] << endl;
    }

    return 0;
}