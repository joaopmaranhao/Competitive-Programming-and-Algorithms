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

    while(t--){
        int n = 7;

        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];      
        }

        sort(all(v));

        ll sum = v[n-1];
        for(int i = 0; i < n-1; i++){
            sum -= v[i];
        }
        cout << sum << endl;
    }
    return 0;
}