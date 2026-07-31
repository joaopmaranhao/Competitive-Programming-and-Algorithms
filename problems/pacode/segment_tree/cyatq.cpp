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
        int m = (l + r) / 2;
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

int main(){ _

    int n;
    if (!(cin >> n)) return 0;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];      
    }

    Segtree t(v);

    int m;
    cin >> m;

    while(m--){
        int x1, y1;
        cin >> x1 >> y1;
        x1--; y1--; 

        cout << t.query(x1, y1).ans << endl;
    }

    return 0;
}