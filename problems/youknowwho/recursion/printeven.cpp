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

vector<int> v;

void printeven(int i){
    if(i < 0) return;
    cout << v[i] << " ";
    printeven(i-2);
}

int main() { _

    int n;
    cin >> n;

    v.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];      
    }

    int i = n-1;
    if(i%2 == 0) printeven(i);
    else printeven(i-1);
    cout << endl;

    return 0;
}