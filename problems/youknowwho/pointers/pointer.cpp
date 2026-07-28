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

void update(int* a, int* b){
    int s = *a + *b;
    int diff = abs(*a - *b);

    *a = s;
    *b = diff;
}

int main() { _

    int a, b;
    cin >> a >> b;

    update(&a, &b);

    cout << a  << endl << b << endl;


    return 0;
}