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

    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];      
    }

    while(q--){
        int x;
        cin >> x;
        
        int l = 0, r = n-1;
        int ans = -1;

        while (l <= r) {
            int m = l + (r - l) / 2;
            if (a[m] > x) r = m - 1;
            else if (a[m] < x) l = m + 1;
            else { ans = m; r = m - 1; } 
        }
        cout << ans << endl;
    }
    
    return 0;
}