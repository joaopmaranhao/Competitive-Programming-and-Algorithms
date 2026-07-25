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

    string dna;
    cin >> dna;

    ll mx = 1;
    ll curr = 1;

    for(int i = 1; i < dna.length(); i++){
        if(dna[i] == dna[i-1]) {
            curr++;
            mx = max(mx, curr);
        }else if(dna[i] != dna[i-1]){
            curr = 1;
        }
    }
    cout << mx << endl;
    return 0;
}