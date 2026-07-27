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

    float x;
    cin >> x;

    if(x >= 0 && x <= 25){
        cout << "Interval [0,25]" << endl;
    }else if(x > 25 && x <= 50){
        cout << "Interval (25,50]" << endl;
    }else if(x > 50 && x <= 75){
        cout << "Interval (50,75]" << endl;
    }else if(x > 75 && x <= 100){
        cout << "Interval (75,100]" << endl;
    }else{
        cout << "Out of Intervals" << endl;
    }

    return 0;
}