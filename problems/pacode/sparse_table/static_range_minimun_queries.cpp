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

// Sparse Table

#include <bits/stdc++.h>
using namespace std;

template <typename T>
struct SparseTable {
    vector<vector<T>> st;
    int n, k;

    //arbitrary operation you'll need to solve the queries
    T op(T a, T b){
        return min(a, b);
    }

    SparseTable(const vector<T>& v){
        n = v.size();
        k = __lg(n) + 1;
        st.assign(k+1, vector<T>(n));

        for(int i = 0; i < n; i++) st[0][i] = v[i]; 
        for(int i = 0; i < n; i++) {
            for(int j = 0; j + (1<<i) <= n; j++) {
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

    int n, q;
    cin >> n >> q;

    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    SparseTable<ll> st(v);

    while(q--){
        int a, b;
        cin >> a >> b;
        a--; b--;
        cout << st.query(a, b) << endl;
    }

    return 0;
}