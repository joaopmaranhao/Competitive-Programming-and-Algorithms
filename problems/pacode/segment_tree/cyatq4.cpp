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
    ll sum;
    ll max_val;

    Node() { sum = 0; max_val = 0; }
    Node(ll v) { sum = v; max_val = v; }

    Node operator+(const Node& other) const {
        Node res;
        res.sum = sum + other.sum;
        res.max_val = max(max_val, other.max_val);
        return res;
    }
};

struct Segtree {
    int n;
    vector<Node> t;

    Segtree(const vector<ll>& vec) {
        n = vec.size();
        t.assign(4 * n, Node());
        build(1, 0, n - 1, vec);
    }

    void build(int pos, int l, int r, const vector<ll>& vec) {
        if (l == r) {
            t[pos] = Node(vec[l]);
            return;
        }
        int m = (l + r) / 2;
        build(2 * pos, l, m, vec);
        build(2 * pos + 1, m + 1, r, vec);
        t[pos] = t[2 * pos] + t[2 * pos + 1];
    }

    void update(int pos, int l, int r, int ql, int qr) {
        if (ql > r || qr < l) return;
        if (l >= ql && r <= qr && t[pos].max_val <= 1) return;
        if (l == r) {
            t[pos].sum = sqrt(t[pos].sum);
            t[pos].max_val = t[pos].sum;
            return;
        }

        int m = (l + r) / 2;
        update(2 * pos, l, m, ql, qr);
        update(2 * pos + 1, m + 1, r, ql, qr);
        t[pos] = t[2 * pos] + t[2 * pos + 1];
    }

    void update(int l, int r) {
        update(1, 0, n - 1, l, r);
    }

    Node query(int pos, int l, int r, int ql, int qr) {
        if (ql > r || qr < l) return Node();
        if (l >= ql && r <= qr) return t[pos];
        int m = (l + r) / 2;
        return query(2 * pos, l, m, ql, qr) + query(2 * pos + 1, m + 1, r, ql, qr);
    }

    ll query(int l, int r) {
        return query(1, 0, n - 1, l, r).sum;
    }
};

int main() { _

    int n, c = 1;
    while (cin >> n) {
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        Segtree t(v);

        int m;
        cin >> m;

        cout << "Case #" << c++ << ":" << endl;

        while (m--) {
            int type, x, y;
            cin >> type >> x >> y;
            if (x > y) swap(x, y);

            x--; y--;

            if (type == 0) {
                t.update(x, y);
            } else {
                cout << t.query(x, y) << endl;
            }
        }
        cout << endl;
    }
    return 0;
}