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
    vector<ll> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }    

    sort(all(v));

    int target;
    cin >> target;

    int l = 0, r = v.size() - 1;
    while(l < r){
        int m = l + (r - l) / 2;
        if(m > target) { l = m; }
        else if(m < target) { r = m; }
        else if(m == target){ cout << "encontrado: " << m << " Valor" << v[m] << endl; }
        else { cout << "n encontrado" << endl;}
    }

    return 0;
}