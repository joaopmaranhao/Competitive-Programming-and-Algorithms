#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

struct BIT {
	int n;
	vector<ll> t;

	BIT(int n) : n(n) {
		t.assign(n + 1, 0);
	}
	BIT(vector<ll> const &a) {
		n = a.size();
		t.assign(n + 1, 0);
		for (int i = 1; i <= n; ++i) {
			t[i] += a[i - 1];
			int j = i + (i & -i);
			if (j <= n) t[j] += t[i];
		}
	}

	ll query(int i) {
		ll ret = 0;
		for (++i; i > 0; i -= i & -i) ret += t[i];
		return ret;
	}
	ll query(int l, int r) {
		return query(r) - query(l - 1);
	}

	void update(int i, ll add) {
		for (++i; i <= n; i += i & -i) t[i] += add;
	}
};

int main() { _
    int t, n, q;
    cin >> t;
    
    for (int c = 1; c <= t; c++) {
        
        cout << "Case " << c << ":" << endl;
        cin >> n >> q;
        vector<ll> vec(n);
        
        for (int i = 0; i < n; i++) cin >> vec[i];
        
        BIT bit(vec);
        
        while (q--) {
            int type; cin >> type;
            if (type == 1) {
                int i; cin >> i;
                ll val = bit.query(i, i);
                cout << val << endl;
                bit.update(i, -val);
            } else if (type == 2) {
                int i; ll v; cin >> i >> v;
                bit.update(i, v);
            } else {
                int i, j; cin >> i >> j;
                cout << bit.query(i, j) << endl;
            }
        }
    }
    return 0;
}