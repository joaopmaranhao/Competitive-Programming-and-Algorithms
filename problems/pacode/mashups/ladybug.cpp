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
        int n; cin >> n;
        string a, b;
        cin >> a >> b;

        int z1, z2;
        z1 = z2 = 0;
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0){
                if(a[i] == '0') z1++;
                if(b[i] == '0') z2++;
            }else{
                if(b[i] == '0') z1++;
                if(a[i] == '0') z2++;
            }
        }

        int n1 = (n+1)/2;
        int n2 = n/2;
        cout << ((z1 >= n1 && z2 >= n2) ? "YES" : "NO") << endl;
    }

    return 0;
}