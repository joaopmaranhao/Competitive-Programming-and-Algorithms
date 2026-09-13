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

    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].F;
        a[i].S = i+1;      
    }
    sort(all(a));
    
    int i = 0, j = n-1;
    while(i < j){
        int s = a[i].F + a[j].F;
        if(s == x){break;}

        if(s < x) {i++;}
        else if(s > x) {j--;}
    }

    if(i >= j) cout << "IMPOSSIBLE" << endl;
    else cout << a[i].S << " " << a[j].S << endl;

    return 0;
}