#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;
typedef unsigned long long llu;

llu xor0(llu n){
        llu res[] = {n, 1, n + 1, 0};
        return res[n%4];
}

int main(){ _
 
        llu a, b, rst;
        cin >> a >> b;

        llu rst_a = (a == 0) ? 0 : xor0(a - 1);
        cout << (xor0(b) ^ rst_a)<< endl;

        return 0;
}