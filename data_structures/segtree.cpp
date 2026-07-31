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

struct Node {
    int val;
    Node() { val = 0; }
    Node(int v) { val = v; }
    Node operator+(const Node& other) const {
        return Node(val + other.val);
    }
};

struct Segtree {

    int n;
    vector<Node> t;

    Segtree(int n_) : n(n_) {
        t.assign(4 * n_, Node());
    }
    Segtree(vector<int>& vec){
        n = vec.size();
        t.assign(4 * n, Node());
        build(1, 0, n - 1, vec);
    }

    void build(int pos, int l, int r, const vector<int>& vec){
        if(l == r){
            t[pos] = Node(vec[l]);
            return;
        }
        int m = (l + r) / 2;
        build(2 * pos, l, m, vec);
        build(2 * pos + 1, m + 1, r, vec);
        t[pos] = t[2 * pos] + t[2 * pos + 1];
    }

    void update(int pos, int idx, int l, int r, int new_val){
        if(l == r){
            t[pos] = Node(new_val);
            return;
        }
        int m = (l + r)/ 2;
        if(idx <= m) update(2 * pos, idx, l, m, new_val);
        else update(2 * pos + 1, idx, m + 1, r, new_val);
        t[pos] = t[2 * pos] + t[2 * pos + 1];
    }

    void update(int idx, int new_val){
        update(1, idx, 0, n - 1, new_val);
    }

    Node query(int pos, int l, int r, int tl, int tr){
        if(tl > r || tr < l) return Node();
        if(l <= tl && tr <= r) return t[pos];
        int m = (tl + tr) / 2;
        return query(2 * pos, l, r, tl, m) + query(2 * pos + 1, l, r, m + 1, tr);
    }

    Node query(int l, int r){
        return query(1, l, r, 0, n - 1);
    }
};

int main() { _

    int t;
    cin >> t;

    while (t--) {
        
    }

    return 0;
}