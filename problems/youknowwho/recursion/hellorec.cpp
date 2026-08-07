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


int recsum(vector<int>& v, int l, int r){
    if(l == r){
        return v[l];
    }
    int m = l + (r-l) / 2;
    return recsum(v, l, m) + recsum(v, m+1, r);
}

int main() { _


    int t;
    cin >> t;
    int total = t;
    while(t--){

        int n;
        cin >> n;
        vector<int> v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];      
        }
        cout << "Case " << total-t << ": " << recsum(v, 0, v.size()-1) << endl;
    }
    
    return 0;
}