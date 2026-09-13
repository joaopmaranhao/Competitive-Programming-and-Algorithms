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

    int t;
    cin >> t;

    while (t--) {
        int q;
        cin >> q;

        deque<int> dq;
        bool rev = false;

        
        ll sum = 0;
        ll rizz = 0;
        
        while(q--){
            int s;
            cin >> s;
            
            int n = dq.size();
            if(s == 1){
                int last;

                if(!rev){
                    last = dq.back();
                    dq.pop_back();
                    dq.push_front(last);
                }else{
                    last = dq.front();
                    dq.pop_front();
                    dq.push_back(last);
                }

                rizz = rizz + sum - 1LL * n * last;
            }else if(s == 2){
                rizz = 1LL * ((n+1) * sum - rizz);
                rev = !rev;
            }else if(s == 3){
                int k;
                cin >> k;

                if(!rev){
                    dq.push_back(k);
                }else{
                    dq.push_front(k);
                }

                rizz += 1LL * k * (n+1);
                sum += 1LL * k;
            }

            cout << rizz << endl;
        }
    }

    return 0;
}