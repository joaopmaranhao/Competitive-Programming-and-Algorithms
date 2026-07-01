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

        int n;
        cin >> n;

        while(n--){
                llu l, r;
                cin >> l >> r;

                for(int i = 0; i < 62; i++) {
                        llu mask = 1ULL << i;

                        if((l | mask) <= r){
                                l |= mask;
                        } else { 
                                break;
                        }
                }

                cout << l << endl;
        }
        return 0;
}