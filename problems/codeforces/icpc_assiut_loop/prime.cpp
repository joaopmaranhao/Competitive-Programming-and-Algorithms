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

    if(n == 1){
        cout << "NO" << endl;
        return 0;
    }
    if(n > 2 && n % 2 == 0) {
        cout << "NO" << endl;
        return 0;
    }

    for(int i = 3; i * i <= n; i += 2) {
        if(n % i == 0){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}