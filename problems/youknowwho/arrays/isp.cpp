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

   
    int n;
    cin >> n;

    vector<int> v(n), u(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];      
    }
    for(int i = 0; i < n; i++) {
        cin >> u[i];      
    }

    map<int, int> freqv;
    map<int, int> freqb;

    for(int i = 0; i < n; i++) {
        freqv[v[i]]++;
        freqb[u[i]]++;      
    }

    (freqv == freqb) ? cout << "yes" : cout << "no";
    cout << endl;

    return 0;
}