#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

using ll = long long;
#define endl '\n'

const ll LINF = 1e18;

struct Node {
    ll sum;
    ll pref;
    ll suff;
    ll ans;

    Node() { 
        sum = 0; 
        pref = suff = ans = -LINF;
    }
    
    Node(ll v) { 
        sum = v; 
        pref = suff = ans = v; 
    }

    Node operator+(const Node& other) const {
        if (ans == -LINF) return other;
        if (other.ans == -LINF) return *this;

        Node res;
        res.sum = sum + other.sum;
        res.pref = max(pref, sum + other.pref);
        res.suff = max(other.suff, other.sum + suff);
        res.ans = max({ans, other.ans, suff + other.pref});
        return res;
    }
};

struct Segtree {
    int n;
    vector<Node> t;

    Segtree(const vector<int>& vec){
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

    Node query(int pos, int l, int r, int tl, int tr){
        if(tl > r || tr < l || tl > tr) return Node();
        if(l <= tl && tr <= r) return t[pos];
        int m = (tl + tr) / 2;
        return query(2 * pos, l, r, tl, m) + query(2 * pos + 1, l, r, m + 1, tr);
    }

    Node query(int l, int r){
        if (l > r) return Node();
        return query(1, l, r, 0, n - 1);
    }

    ll query(int x1, int y1, int x2, int y2) {
        if (y1 < x2) {
            ll left_suff = query(x1, y1).suff;
            ll mid_sum = (y1 + 1 <= x2 - 1) ? query(y1 + 1, x2 - 1).sum : 0;
            ll right_pref = query(x2, y2).pref;
            return left_suff + mid_sum + right_pref;
        } else {
            ll optA = -LINF, optB = -LINF, optC = -LINF;
            if (x1 <= x2 - 1) {
                optA = query(x1, x2 - 1).suff + query(x2, y2).pref;
            }
            if (y1 + 1 <= y2) {
                optB = query(x2, y1).suff + query(y1 + 1, y2).pref;
            }
            optC = query(x2, y1).ans;

            return max({optA, optB, optC});
        }
    }
};

int main(){ _

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];      
        }

        Segtree t(v);

        int m;
        cin >> m;

        while(m--){
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            x1--; y1--; x2--; y2--;

            cout << t.query(x1, y1, x2, y2) << endl;
        }
    }

    return 0;
}