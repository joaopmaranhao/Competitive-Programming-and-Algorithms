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

bool is_prime(int n){
    if(n<2) return false;
    if(n>2 && n % 2 == 0) return false;
    for(int i = 2; i * i <= n; i+=2){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main() { _

    int n;
    cin >> n;

    int almost = 0;
    for(int i = 1; i <= n; i++){
        int factors = 0;
        for(int j = 2; j <= n; j++){
            if(is_prime(j) && i%j == 0){
                factors++;
            }
        }
        if(factors == 2) almost++;
    }
    cout << almost << endl;
    return 0;
}