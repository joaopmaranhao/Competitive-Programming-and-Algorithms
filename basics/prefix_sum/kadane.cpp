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
        vector<ll> v(n);

        for(int i = 0; i < n; i++) {
                cin >> v[i];
        }

        ll maxl = v[0];
        ll maxgl = v[0];

        for(int i = 1; i < n; i++) {
                maxl = max(v[i], maxl + v[i]);
                maxgl = max(maxgl, maxl);
        }
        cout << maxgl << endl;

        return 0;
}