#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
using namespace std;

using ll = long long;

int main() { _

    int n;
    cin >> n;

    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
    if(n <= 3) {
        cout << "NO SOLUTION" << endl; 
        return 0;
    }


    for(int i = 2; i <= n; i++) {
        if(i % 2 == 0) {
            cout << i << " ";
        }
    }
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 1) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}