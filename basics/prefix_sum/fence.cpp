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

int main(){

        int n, k;
        cin >> n >> k;

        vector<ll> fence(n);

        for(int i = 0; i < n; i++) {
                cin >> fence[i];        
        }

        vector<ll> pre = prefix_sum(fence);

        ll res = LINF;
        int idx = 1;
        for(int i = 1; i < n - k + 2; i++) {
                ll locmin = pre[i + k - 1] - pre[i - 1];
                if(res > locmin){
                        res = locmin;
                        idx = i; 
                }
        }

        cout << idx << endl;

        return 0;
}