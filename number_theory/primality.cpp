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

bool is_prime(int n){
        if(n == 1) return false;
        if(n > 2 && n % 2 == 0) return false;

        for(int i = 3; i * i <= n; i+=2){
                if(n % i == 0) return false;
        }
        return true;
}

int main(){ _
        int t;
        cin >> t;

        while(t--){
                int n;
                cin >> n;
                cout << (is_prime(n) ? "yes" : "no") << endl;
        }
        return 0;
}