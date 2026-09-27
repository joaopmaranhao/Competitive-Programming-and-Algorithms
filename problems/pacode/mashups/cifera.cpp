#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

using ll = long long;
#define endl '\n'

int main() { _

    ll k, l;
    cin >> k >> l;
    if(l == 1) {cout << "NO" << endl; return 0; }
    int i = 0;
    while(l % k == 0){
        l /= k;
        i++;
    }
    cout << (l == 1 ? ("YES\n" + to_string(i-1)) : "NO") << endl;
    return 0;
}