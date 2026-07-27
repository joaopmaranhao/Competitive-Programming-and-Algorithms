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

    string s;
    getline(cin, s);
    
    istringstream iss(s);
    vector<string> tk;
    string pa;

    while(iss >> pa){
        tk.pb(pa);
    }

    if(tk[1] == "+"){
        if(stoi(tk[0]) + stoi(tk[2]) == stoi(tk[4])){
            cout << "Yes" << endl;
        }else{
            cout << stoi(tk[0]) + stoi(tk[2]) << endl;
        }
    }else if(tk[1] == "*"){
        if(stoi(tk[0]) * stoi(tk[2]) == stoi(tk[4])){
            cout << "Yes" << endl;
        }else{
            cout << stoi(tk[0]) * stoi(tk[2]) << endl;
        }
    }else if(tk[1] == "-"){
        if(stoi(tk[0]) - stoi(tk[2]) == stoi(tk[4])){
            cout << "Yes" << endl;
        }else{
            cout << stoi(tk[0]) - stoi(tk[2]) << endl;
        }
    }
    return 0;
}