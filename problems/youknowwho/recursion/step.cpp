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

ll ways(int i, int s, int e){
    if(i < s) return 0;
    if(i == s) return 1;
    return ways(i-1, s, e) + ways(i-2, s, e) + ways(i-3, s, e); 
}

int main() { _

    int s, e;
    cin >> s >> e;

    cout << ways(e, s, e) << endl;

    return 0;
}