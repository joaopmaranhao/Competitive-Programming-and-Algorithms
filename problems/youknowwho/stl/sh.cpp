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
    int n = s.length();

    vector<pair<int, int>> p(n);

    ll c = 0;
    for(int i = 0; i < n; i++){
        p[i] = {c, i};
        c += (s[i] == '(') ? 1 : -1;
    }
    sort(all(p), [](const pair<int,int>& a, const pair<int,int>& b){
        return a.F != b.F ? a.F < b.F : a.S > b.S;
    });
    for(int i = 0; i < n; i++){
        cout << s[p[i].S];
    }
    cout << endl;
    return 0;
}