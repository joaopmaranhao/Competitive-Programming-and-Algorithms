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

int main(){ _
        int q;
        cin >> q;
        deque<ll> deq;

        while(q--){
                int qt;
                cin >> qt;

                if(qt == 0){
                        int d;
                        ll x;
                        cin >> d >> x;
                        d ? deq.pb(x) : deq.push_front(x);
                }else if(qt == 1){
                        int p;
                        cin >> p;
                        cout << deq[p] << endl;
                }else if(qt == 2 && !deq.empty()){
                        int d;
                        cin >> d;
                        d ? deq.pop_back() : deq.pop_front();
                }
        }
        return 0;
}