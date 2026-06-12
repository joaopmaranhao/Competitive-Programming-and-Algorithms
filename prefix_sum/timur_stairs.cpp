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

vector<ll> prefix_sum(const vector<ll>& v){
        int n = v.size();

        vector<ll> pre(n + 1, 0);
        for(int i = 0; i < n; i++){
                pre[i + 1] = pre[i] + v[i];
        }

        return pre;
}


int main(){ _
        int t;
        cin >> t;

        while(t--){
                int n, q;
                cin >> n >> q;

                vector<ll> v(n);
                vector<ll> maxn(n);

                for(int i = 0; i < n; i++) {
                        cin >> v[i];

                        if(i == 0){
                                maxn[i] = v[i];
                        }else{
                                maxn[i] = max(maxn[i - 1], v[i]);
                        }
                }

                vector<ll> stairs = prefix_sum(v);

                while(q--){
                        int k;
                        cin >> k;

                        int idx = upper_bound(all(maxn), k) - maxn.begin();
                        cout << stairs[idx] << " ";
                }
                cout << endl;
        }

        return 0;
}