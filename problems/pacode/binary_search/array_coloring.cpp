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
        
        vector<int> a(n);
        for(auto& ai : a) cin >> ai;

        sort(all(a));
        int l = 0, r = n-1;
        int cost = 0;

        while(l < r){
            cost += a[r] - a[l];
            l++; r--;
        }
        cout << cost << endl;

    }

    return 0;
}