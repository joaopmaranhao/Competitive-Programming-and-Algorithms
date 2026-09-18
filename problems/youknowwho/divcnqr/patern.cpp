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

void print(int n){
    if(n == 1){
        cout << "A";
        return;
    }
    print(n-1);
    char c = n + 'A' - 1;
    cout << c;
    print(n-1);
}

int main() { _

    int n;
    cin >> n;

    print(n);

    return 0;
}