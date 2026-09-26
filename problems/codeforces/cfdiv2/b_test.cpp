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
    cin >> n;

    set<int> seen;
    bool flag = true;
    while(seen.find(n) == seen.end()){
        cout << n << " ";
        if(n == 1){
            flag = false;
            break;
        }
        string str = to_string(n);
        seen.insert(n);
        
        int soma = 0;
        for(auto& c : str){
            soma += (c-'0')*(c-'0');
        }
        n = soma;
    }
    cout << n << endl;
    cout << (flag ? "Tem ciclo" : "Não tem") << endl;
    cout << endl;

    return 0;
}