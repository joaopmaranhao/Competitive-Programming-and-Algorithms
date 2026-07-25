#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()

struct BIT{
    int n;
    vector<ll> bit;

    BIT(int n) : n(n) {
        bit.assign(n + 1, 0);
    }

    BIT(const vector<ll>& v){

        n = v.size();
        bit.assign(n + 1, 0);
        for(int i = 1; i <= n; i++) {
            bit[i] += v[i - 1];
            int j = i + (i & -i);
            if(j <= n) { bit[j] += bit[i]; }       
        }
    }

    ll query(int i) {
        ll ret = 0;
        for(++i; i > 0; i -= i & -i) { ret += bit[i]; }
        return ret;
    }
    ll query(int l, int r){
        return query(r) - query(l - 1);
    }
    void update(int i, ll add){
        for(++i; i <= n; i+= i & -i) { bit[i] += add; }
    }

};

struct Query {
    char type;
    int k; ll x;
    ll a, b;
};

int main() { _
    int n, q;
    if (!(cin >> n >> q)) return 0;

    vector<ll> p(n + 1);
    vector<ll> vals; 

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        vals.push_back(p[i]);
    }

    vector<Query> queries(q);

    for (int i = 0; i < q; i++) {
        cin >> queries[i].type;
        if (queries[i].type == '!') {
            cin >> queries[i].k >> queries[i].x;
            vals.push_back(queries[i].x);
        } else {
            cin >> queries[i].a >> queries[i].b;
        }
    }

    sort(all(vals));
    vals.erase(unique(all(vals)), vals.end());
    
    map<int, int> compress;
    for(int i = 0; i < vals.size(); i++){
        compress[vals[i]] = i;
    }
    
    BIT bit(vals.size());

    for(int i = 1; i <= n; i++) {
        bit.update(compress[p[i]], 1);      
    }

    for(int i = 0; i < q; i++) {
        if(queries[i].type == '?'){
            ll a = queries[i].a;
            ll b = queries[i].b;

            int id_a = lower_bound(all(vals), a) - vals.begin();
            int id_b = upper_bound(all(vals), b) - vals.begin() - 1;

            if (id_a <= id_b) {
                cout << bit.query(id_a, id_b) << endl;
            } else {
                cout << 0 << endl;
            }
        } else {
            int func = queries[i].k;
            ll novo_sal = queries[i].x;

            bit.update(compress[p[func]], -1);
            p[func] = novo_sal;
            bit.update(compress[novo_sal], 1);
        }
    }

    return 0;
}