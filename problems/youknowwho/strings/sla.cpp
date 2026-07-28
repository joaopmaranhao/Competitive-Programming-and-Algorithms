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
        string a, b;
        cin >> a >> b;

        int i, j;
        i = j = 0;

        string ans;
        while(i < a.length() && j < b.length()){
            ans += a[i];
            ans += b[j];
            i++, j++;
        }while(i < a.length()){
            ans += a[i];
            i++;
        }while(j < b.length()){
            ans += b[j];
            j++;
        }
        cout << ans << endl;
    }

    return 0;
}