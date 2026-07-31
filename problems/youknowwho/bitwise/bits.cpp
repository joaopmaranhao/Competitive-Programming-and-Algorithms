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

int main() { _

    int n, k;
    cin >> n >> k;

    int mxand, mxor, mxxor;
    mxand = mxor = mxxor = -INF;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            
            int val_and = i & j;
            int val_or = i | j;
            int val_xor = i ^ j;

            if (val_and < k) mxand = max(mxand, val_and);
            if (val_or < k)  mxor  = max(mxor, val_or);
            if (val_xor < k) mxxor = max(mxxor, val_xor);
        }
    }

    cout << mxand << endl;
    cout << mxor << endl;
    cout << mxxor << endl;

    return 0;
}