#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define MAXM 200100

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


int n, t;
ll machines[MAXM];

bool valid(ll x){
        ll cnt = 0;
        for(int i = 0; i < n; i++) {
                cnt += x / machines[i];
                if(cnt >= t) return true;
        }
        return cnt >= t;
}

int main(){ _

        cin >> n >> t;

        for(int i = 0; i < n; i++) {
                cin >> machines[i];
        }

        ll l = 1, r = 1e18 + 5;
        ll m;

        while(l < r){
                m = l + (r - l) / 2;

                if(valid(m)){
                        r = m;
                }else{
                        l = m + 1;
                }
        }

        cout << l << endl;

        return 0;
}