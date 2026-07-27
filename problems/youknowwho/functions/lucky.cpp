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

bool islucky(int n){
    string s = to_string(n);
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '4' && s[i] != '7'){
            return false;
        }
    }
    return true;
}

int main() { _

    int a, b;
    cin >> a >> b;

    bool hasluck = false;
    for(int i = a; i <= b; i++) {
        if(islucky(i)) {
            cout << i << " ";
            hasluck = true;
        }
    }
    if(!hasluck) cout << -1;
    cout << endl;

    return 0;
}