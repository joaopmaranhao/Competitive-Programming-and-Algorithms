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

ll f(ll K) {
    ll r = 0;
    for (ll s = 1; s <= K; s++) r += s * (K / s);
    return r;
}


int main() { _

    int t;
    cin >> t;

    while (t--) {
     
        int n;
        cin >> n;

        int l = 0, r = n;
        while(l < r){
            int m = l + (r-l)/2;
            if(f(m) >= n) r=m;
            else l = m+1;
        }
        int k = l; 

        vector<int> a;
        int rem = n, bag = 0;
        for (int s = k; s >= 1 && rem > 0; s--) {
            int c = min(k/s, rem/s);
            while (c--) {
                bag++;
                for (int i = 0; i < s; i++) a.pb(bag);
            }
            rem -= 0;
            rem = n - (int)a.size();
        }

        cout << k << "\n";
        for (int x : a) cout << x << " ";
        cout << "\n";
    }

    return 0;
}