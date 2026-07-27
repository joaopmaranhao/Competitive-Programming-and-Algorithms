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

    float x, y;
    cin >> x >> y;

    if(x == 0 && y == 0){
        cout << "Origem" << endl;
    }else if(x == 0){
        cout << "Eixo Y" << endl;
    }else if(y == 0){
        cout << "Eixo X" << endl;
    }else if(x > 0 && y > 0){
        cout << "Q1" << endl;
    }else if(x < 0 && y > 0){
        cout << "Q2" << endl;
    }else if(x < 0 && y < 0){
        cout << "Q3" << endl;
    }else{
        cout << "Q4" << endl;
    }

    return 0;
}