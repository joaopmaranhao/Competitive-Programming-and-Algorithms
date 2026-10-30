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

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main() { _

    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].F;
        a[i].S = i+1;      
    }

    sort(all(a));

    int first = a[0].S;
    int second = -1;
    for(int i = 1; i < n; i++){
        if(a[i].F % a[0].F == 0){
            second = a[i].S; 
            break;
        }
    }

    cout << first << " " << second << endl;

    return 0;
}