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
    deque<int> d;
    for(int i = 0; i < n; i++) {
        d.pb(i+1);      
    }

    for(int i = 0; !d.empty(); i++){
        if(i % 2 == 1){
            cout << d.front() << " ";
            d.pop_front();
        }else{
            int s = d.front();
            d.pop_front();
            d.push_back(s);
        }
    }
    cout << endl;

    return 0;
}