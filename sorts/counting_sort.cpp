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

void counting_sort(const vector<ll>& a, vector<ll>& b, int k) {
    vector<ll> c(k + 1, 0); 

    for (int i = 0; i < a.size(); i++) {
        c[a[i]]++;
    }

    for (int i = 1; i <= k; i++) {
        c[i] = c[i] + c[i - 1];
    }

    for (int i = a.size() - 1; i >= 0; i--) {
        b[c[a[i]] - 1] = a[i];
        c[a[i]]--;
    }
}

int main(){ _
    
        int n;
        ll k = -LINF;
        cin >> n;
        
        vector<ll> v(n);
        vector<ll> s(n);

        for(int i = 0; i < n; i++){
                cin >> v[i];
                k = max(k, v[i]);
        }
        
        counting_sort(v, s, k);
        
        for(auto& a : s){
                cout << a << " ";
        }
        cout << endl;
    
        return 0;
}