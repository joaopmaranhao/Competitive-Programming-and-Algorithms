#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

using ll = long long;

#define endl '\n'

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

int main() { _

    int d;
    cin >> d;

    int y = d / 365;
    d = d % 365;
    int m = d / 30;
    d = d % 30;

    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl;

    return 0;
}