#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

using ll = long long;
using ull = unsigned long long;

int main() { _

    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];      
    }

    vector<ll> p(n+1, 0);
    for(int i = 1; i <= n; i++) {
        p[i] = a[i] + p[i-1];
    }

    //queries
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << p[r] - p[l-1] << endl;
    }

    return 0;
}