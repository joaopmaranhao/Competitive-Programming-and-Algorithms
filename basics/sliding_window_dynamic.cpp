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

int main() { _

    int n;
    ll s;
    cin >> n >> s;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }   

    ll cur = 0;
    int best = INF;
    int l = 0;

    for(int r = 0; r < n; r++){
        cur += a[r];
        while(cur >= s){
            best = min(best, r - l + 1);
            cur -= a[l];
            l++;
        }
    }

    cout << (best == INF ? -1 : best) << '\n';
    return 0;
}