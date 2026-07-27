#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

using ll = long long;
using ull = unsigned long long;

#define endl '\n'


int main() { _

    int a, b;
    cin >> a >> b;

    if(a % b == 0 || b % a == 0 ){
        cout << "Multiples" << endl;
    }else{
        cout << "No Multiples" << endl;
    }

    return 0;
}