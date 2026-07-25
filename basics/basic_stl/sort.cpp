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

int main(){
    
    int n;
    ll temp;
    vector<ll> vec;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        vec.pb(temp);
    }
    
    sort(vec.begin(), vec.end());
    
    for(int i = 0; i < n; i++){
        cout << vec[i] << " ";
    }
    cout << endl;
}