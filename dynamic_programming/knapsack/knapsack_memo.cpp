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

struct item {
    int w, v, idx;
    item(int w_, int v_, int i_) : w(w_), v(v_), idx(i_) {}
};

vector<item> items;
vector<vector<int>> memo;

vector<bool> picked;

//returns optimal value of the knapsack
int knapsack_solve(int n, int m){
    if(n==0 || m == 0) { return 0; }
    if(memo[n][m] != -1) { return memo[n][m]; }

    if(items[n-1].w > m){
        memo[n][m] = knapsack_solve(n-1, m);
    }else{
        memo[n][m] = max(knapsack_solve(n-1, m - items[n-1].w) + items[n-1].v, knapsack_solve(n-1, m));
    }

    return memo[n][m];
}

void knapsack_items_picked(int n, int m){
    if(n == 0 || m == 0){ return; }

    if(items[n-1].w > m) {
        picked[items[n-1].idx] = false;
        knapsack_items_picked(n-1, m);
    }
    else if(memo[n][m] == memo[n-1][m - items[n-1].w] + items[n-1].w){
        picked[items[n - 1].idx] = true;
        knapsack_items_picked(n - 1, m - items[n - 1].w);
    } else {
        picked[items[n - 1].idx] = false;
        knapsack_items_picked(n - 1, m);
    }
}

void knapsack(int n, int m){
    memo.assign(n, vector<int>(m, -1));
    knapsack_items_picked(n, m);
}

int main() { _

    int n, w;
    cin >> n >> w;

    for(int i = 0; i < n; i++) {
        int w, v;
        cin >> w >> v;
        items.pb(item(w, v, i));      
    }

    knapsack_items_picked(n, w);
    
    for(int i = 0; i < n; i++){
        cout << (picked[i] ? "1" : "0") << " ";
    }
    cout << endl;
    
    return 0;
}