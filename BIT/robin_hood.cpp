#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

using ll = long long;
using llu = unsigned long long;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
//

struct BIT {
        int n;
        vector<ll> t;

        BIT(int n) : n(n) {
                t.assign(n + 1, 0);
        }
        BIT(vector<ll> const &a) {
                n = a.size();
                t.assign(n + 1, 0);
                for (int i = 1; i <= n; ++i) {
                        t[i] += a[i - 1];
                        int j = i + (i & -i);
                        if (j <= n) t[j] += t[i];
                }
        }

        ll query(int i) {
                ll ret = 0;
                for (++i; i > 0; i -= i & -i) ret += t[i];
                return ret;
        }
        ll query(int l, int r) {
                return query(r) - query(l - 1);
        }

        void update(int i, ll add) {
                for (++i; i <= n; i += i & -i) t[i] += add;
        }
};

int main(){

        int T, n, q;
        vector<ll> vec;
        vector<tuple<int, int, int>> cmds;
        
        cin >> T;
        
        for(int i = 0; i < T; i++){
                
                cin >> n >> q;
                for(int i = 0; i < n; i++){
                        cin >> vec[i];
                }for(int i = 0; i < q; i++){
                        cin >> get<1>(cmds[i]);
                        cin >> get<2>(cmds[i]);
                        cin >> get<3>(cmds[i]);
                }

                BIT bit(vec);

                for(int i = 0; i < q; i++){
                       if(get<1>(cmds[i]) == 1){
                                bit.update(get<2>(cmds[i]), bit.query(get<2>(cmds[i])));
                       }else if(get<1>(cmds[i]) == 1){
                                bit.update(get<2>(cmds[i]), get<3>(cmds[i]));
                       }else if(get<1>(cmds[i]) == 3){
                                bit.query(get<2>(cmds[i]), get<3>(cmds[i]));
                       }
                }

        }
}