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

    string s, t;
    cin >> s >> t;

    int n = min(s.length(), t.length());
    bool printed = false;
    for(int i = 0; i < n; i++){
        if(s[i] < t[i]){
            cout << s; printed = true;
            break;        
        }else if(s[i] > t[i]){
            cout << t; printed = true;
            break;
        }
    }
    if(!printed && s.length() <= t.length()){
        cout << s;
    }else if(!printed && s.length() > t.length()){
        cout << t;
    }
    cout << endl;
    return 0;
}