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

bool isprime(int n){
    if(n <= 1) { return false; }
    if(n > 2 && n % 2 == 0){ return false; }
    for(int i = 3; i * i <= n; i += 2){
        if(n % i == 0){ return false; }
    }
    return true;
}

int main() { _

    int n;
    cin >> n;

    for(int i = 0; i <= n; i++) {
        if(isprime(i)) { 
            cout << i << " "; 
        }      
    }
    cout << endl;

    return 0;
}