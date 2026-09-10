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
    string s;
   
    cin >> n;
    cin >> s;

    int ones = 0, zeros = 0;
    for(auto c : s){
        if(c == 'n') ones++;
        if(c == 'z') zeros++;
    }
    for(int i = 0; i < ones + zeros; i++){
        (i < ones) ? cout << 1 : cout << 0; cout << " ";
    }
    
    cout << endl;
    return 0;
}