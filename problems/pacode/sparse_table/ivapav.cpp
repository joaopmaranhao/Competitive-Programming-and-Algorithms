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

template <typename T>
struct SparseTable {
    vector<vector<T>> st;
    int n, k;

    T op(T a, T b) { 
        return a & b;
    }

    SparseTable(const vector<T> &vec) {
        n = vec.size();
        k = __lg(n) + 1;
        st.assign(k + 1, vector<T>(n));
        for (int j = 0; j < n; j++) st[0][j] = vec[j];
        for (int i = 1; i <= k; i++){ 
            for (int j = 0; j + (1 << i) <= n; j++){ 
                st[i][j] = op(st[i - 1][j], st[i - 1][j + (1 << (i - 1))]);
            }
        }
    }

    T query(int l, int r) {
        int i = __lg(r - l + 1);
        return op(st[i][l], st[i][r - (1 << i) + 1]);
    }
};

int main() { _

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];     
        }
        
        SparseTable<int> st(v);

        int q;
        cin >> q;

        while (q--) {
            int l, k;
            cin >> l >> k;
            l--;

            int le = l, ri = n - 1;
            int ans = -1;

            while (le <= ri) {
                int m = le + (ri - le) / 2;
                if (st.query(l, m) >= k) {
                    ans = m + 1;
                    le = m + 1;
                } else {
                    ri = m - 1;
                }
            }

            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
}