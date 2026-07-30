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

    int s, t;
    cin >> s >> t;

    int ans = 0;

    for(int i = 0; i <= s; i++){
        for(int j = 0; i + j <= s; j++){
            for(int k = 0; i + j + k <= s; k++){
                int sum = i + j + k;
                int mul = i * j * k;

                if(sum <= s && mul <= t){ ans++; }
            }
        }
    }

    cout << ans << endl;

    return 0;
}