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

struct BIT{
    int n;
    vector<ll> bit;

    BIT(int n) : n(n) {
        bit.assign(n + 1, 0);
    }

    //this operation builds the bit by extracting the LSB (i & -i), from the
    //index, the prefixation is done by default this way
    BIT(const vector<ll>& v){

        n = v.size();
        bit.assign(n + 1, 0);
        for(int i = 1; i <= n; i++) {
            bit[i] += v[i - 1];
            int j = i + (i & -i);
            if(j <= n) { bit[j] += bit[i]; }       
        }
    }

    // walks down the BIT and sums up the value, it happens in O(log n) time 
    ll query(int i) {
        ll ret = 0;
        for(++i; i > 0; i -= i & -i) { ret += bit[i]; }
        return ret;
    }
    ll query(int l, int r){
        return query(r) - query(l - 1);
    }
    //allows update in O(log n) time
    void update(int i, ll add){
        for(++i; i <= n; i+= i & -i) { bit[i] += add; }
    }

};

int main() { _

    int n, q;
    cin >> n >> q;

    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];      
    }

    vector<ll> diff(n);
    diff[0] = v[0];
    for(int i = 1; i < n; i++) {
        diff[i] = v[i] - v[i - 1];
    }
    BIT bit(diff);

    while(q--){
        int qt;
        cin >> qt;

        if(qt == 1){
            int a, b;
            ll u;
            cin >> a >> b >> u;

            bit.update(a - 1, u);
            bit.update(b, -u);

        }else if(qt == 2){
            int k; cin >> k;
            cout << bit.query(k - 1) << endl;
        }
    }
    return 0;
}