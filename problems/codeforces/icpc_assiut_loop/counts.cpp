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

    vector<int> v(n, 0);

    int pos, neg, even, odd;
    pos = neg = even = odd = 0; 
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];

        if(v[i] % 2 == 0){even++;} else { odd++;}
        if(v[i] > 0) {pos++;} else if(v[i] < 0) {neg++;}
    }
    
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;

    return 0;
}