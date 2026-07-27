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

    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];      
    }

    int mx = -INF;
    int mn = INF;

    int mndx, mxdx;
    for(int i = 0; i < n; i++){
        if(v[i] > mx){
            mx = v[i];
            mxdx = i;
        }
        if(v[i] < mn){
            mn = v[i];
            mndx = i;
        }
    }

    swap(v[mndx], v[mxdx]);

    for(int i : v){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}