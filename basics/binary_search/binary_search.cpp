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

        int n, q;
        cin >> n >> q;

        vector<int> vec(n);
        for(int i = 0; i < n; i++) {
                cin >> vec[i];
        }

        while(q--){
                int x;
                cin >> x;
                int l = 0, r = vec.size(), ans = -1;
                while(l < r){
                        int m = l + (r - l) / 2;
                        if(vec[m] < x){
                                l = m + 1;
                        } else if(vec[m] > x){
                                r = m;
                        } else {
                                ans = m;
                                r = m;
                        }
                }
                cout << ans << endl;
        }

        return 0;
}
