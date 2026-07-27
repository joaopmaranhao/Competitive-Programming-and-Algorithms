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

    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];      
    }

    int mn = INF;
    for(int i = 0; i < n; i++){
        int t = v[i];
        int f = 0;
        while(t%2 == 0){
            t >>= 1;
            f++;
        }
        mn = min(mn, f);
    }
    cout << mn << endl;

    return 0;
}