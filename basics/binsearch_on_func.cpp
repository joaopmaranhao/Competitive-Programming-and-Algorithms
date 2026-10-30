#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

using ll = long long;
using ull = unsigned long long;

bool valid(ll m){
    //Validation function, it must be monotonic
    // F F F F F F V V V V V V or V V V V V V F F F F F F 
    return false;
}

int main() { _

    ll l = 0, r = 2e18; //search range can change
    ll ans = -1;
    
    while(l <= r){
        ll m = l + (r-l)/2;
        if(valid(m)) {ans = m; r = m-1;}
        else l = m+1;
    }

    //this works for F F F F V V V V V
    //if your function means V V V V V F F F F, you must invert the conditions
    cout << ans << endl;

    return 0;
}