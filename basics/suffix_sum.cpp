#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

using ll = long long;
using ull = unsigned long long;

int main() { _
 
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){ 
        cin >> a[i];
    }

    vector<ll> s(n+1, 0);
    for(int i = n-1; i >= 0; i--){
        s[i] = a[i] + s[i+1];
    }
    
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << s[l-1] - s[r] << '\n';
    }
    return 0;
}