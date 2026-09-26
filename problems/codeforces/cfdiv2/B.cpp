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

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < 100; i++){
            for(auto& ai : a){
                string str = to_string(ai);
                int soma = 0;
                for(auto& c : str){
                    soma += (c-'0')*(c-'0');
                }
                ai = soma;
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++){
                if(a[i] == a[j]) ans++;
            }     
        }
        cout << ans << endl;
    }
    return 0;
}