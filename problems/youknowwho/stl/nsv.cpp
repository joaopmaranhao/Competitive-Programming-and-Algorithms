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
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    stack<pair<int,int>> s; //index, value pair
    s.push({0, -INF});
    for(int i = 0; i < n; i++) {
        while(s.size() > 1 && s.top().S >= a[i]){
            s.pop();
        }
        cout << s.top().F << " ";
        s.push({i+1, a[i]});
    }
    cout << endl;

    return 0;
}