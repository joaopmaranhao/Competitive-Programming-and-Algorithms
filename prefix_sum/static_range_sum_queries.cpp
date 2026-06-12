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
    
    vector<ll> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    vector<ll> pre(n + 1);
    
    for(int i = 0; i < n; i++){
        pre[i + 1] = pre[i] + v[i]; 
    }
    
    while(q--){
        
        int a, b;
        cin >> a >> b;
        
        cout << pre[b] - pre[a - 1] << endl;
        
    }
}