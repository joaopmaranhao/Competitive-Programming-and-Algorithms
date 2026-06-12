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
 
        int n;
        cin >> n;

        vector<ll> v(n);

        for(int i = 0; i < n; i++) {
                cin >> v[i];
        }

        vector<ll> ord = v;
        sort(all(ord));

        vector<ll> pre_v = prefix_sum(v);
        vector<ll> pre_o = prefix_sum(ord);

        int m;
        cin >> m;

        while(m--){
                int t, l, r;

                cin >> t >> l >> r;

                if(t == 1){
                        cout << pre_v[r] - pre_v[l - 1] << endl;
                }else if(t == 2){
                        cout << pre_o[r] - pre_o[l - 1] << endl;
                }
        }

        return 0;
}