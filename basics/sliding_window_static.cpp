#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

using ll = long long;
using ull = unsigned long long;

int main() { _

    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll cur = 0;
    for(int i = 0; i < k; i++){
        cur += a[i];
    }
    ll best = cur;

    for(int i = k; i < n; i++){
        cur += a[i];
        cur -= a[i-k];    
        best = max(best, cur);
    }

    cout << best << '\n';
    return 0;

    return 0;
}