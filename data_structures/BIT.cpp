#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
