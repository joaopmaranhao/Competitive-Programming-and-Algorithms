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

vector<int> w;
vector<int> v;

int knapsack(int n, int m){
    if(n == 0 || m == 0) return 0;
    if(w[n-1] > m) return knapsack(n-1, m);
    return max(knapsack(n-1, m), knapsack(n-1, m-w[n-1]) + v[n-1]);
}

int main() { _

    int n, m;
    cin >> n >> m;

    w.resize(n);
    v.resize(n);

    for(int i = 0; i < n; i++) {
        cin >> w[i] >> v[i];      
    }

    cout << knapsack(n, m) << endl;

    return 0;
}