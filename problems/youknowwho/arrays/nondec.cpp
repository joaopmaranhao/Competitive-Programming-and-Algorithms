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

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];      
        }

        int ndec = 0;
        int len = 0;

        for(int i = 0; i < n; i++) {
            if(i == 0 || v[i] >= v[i-1]){
                len++;      
            }else{
                len = 1;
            }
            ndec += len;
        }
        cout << ndec << endl;
    }

    return 0;
}