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

bool ispossible(vector<ll>& s, int c, ll d){
    int count = 1;
    ll last = s[0];
    for(int i = 1; i < s.size(); i++){
        if(s[i] - last >= d){
            count++;
            last = s[i];
        }
    }
    return count >= c;
}

int main() { _

    int t;
    cin >> t;

    while(t--){
        int n, c;
        cin >> n >> c;
        
        vector<ll> s(n);
        for(auto& si : s) cin >> si;

        sort(all(s));

        ll l = 1, r = s[n-1] - s[0];
        while(l < r){

            ll m = l + (r-l+1)/2;

            bool is = ispossible(s, c, m);
            if(is) l = m;
            else r = m - 1;
        } 
        cout << l << endl;
    }

    return 0;
}