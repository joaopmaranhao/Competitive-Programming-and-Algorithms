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
 
        int n, x;
        cin >> n >> x;

        vector<ll> v(n);

        for(int i = 0; i < n; i++) {
                cin >> v[i];
        }

        vector<ll> pre = prefix_sum(v);
        map<ll, ll> counts;
        counts[0] = 1;

        ll ans = 0;
        for(int i = 0; i < n; i++){
                ll target = pre[i + 1] - x;
                ans += counts[target];
                counts[pre[i + 1]]++;
        }
        cout << ans << endl;

        return 0;
}