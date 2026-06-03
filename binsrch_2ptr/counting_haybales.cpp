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
        
        freopen("haybales.in", "r", stdin);
        freopen("haybales.out", "w", stdout);

        int n, q;
        cin >> n >> q;

        vector<int> vec(n);

        for(int i = 0; i < n; i++) {
                cin >> vec[i];      
        }
        sort(all(vec));
        while(q--){

                int a, b;
                cin >> a >> b;

                auto l = lower_bound(all(vec), a);
                auto r = upper_bound(all(vec), b);

                cout << r - l << endl;
        }

        return 0;
}