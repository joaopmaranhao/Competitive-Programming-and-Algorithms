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


void mv(int A, int B){
    cout << A << " " << B << endl;
}

void hanoi(int n, int A = 1, int C = 3, int B = 2){
    if(n == 1){
        mv(A, C);
    }else{
        hanoi(n-1, A, B, C);
        mv(A, C);
        hanoi(n-1, B, C, A);
    }
}

int main() { _

    int t;
    cin >> t;

    cout << (1<<t) - 1 << endl;
    hanoi(t);

    return 0;
}