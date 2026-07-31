#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define pf push_front
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
 
        int n;
        cin >> n;

        deque<ll> deq;
        for(int i = 0; i < n; i++) {
                ll temp;
                cin >> temp;

                (i % 2  == 0) ? deq.pb(temp) :  deq.pf(temp);
        }

        
        if(n % 2 == 0) {
                for(ll x : deq) {
                        cout << x << " ";
                }
        }
        else {
                for(int i = n - 1; i >= 0; i--){
                        cout << deq[i] << " ";
                }
        }
        cout << endl;
        return 0;
}