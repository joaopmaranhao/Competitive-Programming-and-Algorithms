#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

using ll = long long;
using ull = unsigned long long;

#define pb push_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

bool ispalindrome(vector<int>& v, int l, int r){
    if(l >= r) return true;
    if(v[l] != v[r]) return false;
    return ispalindrome(v, l+1, r-1);
}

int main() { _

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];      
    }

    cout << (ispalindrome(v, 0, v.size()-1) ? "YES" : "NO") << endl;

    return 0;
}