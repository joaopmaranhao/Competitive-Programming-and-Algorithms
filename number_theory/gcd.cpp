#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll gcd(ll a, ll b){
        if(b == 0) return a;
        return gcd(b, a % b);
}


int main(){ _       
        ll a, b;
        while(cin >> a >> b){
                cout << gcd(a, b) << endl;
        }
        return 0;
}