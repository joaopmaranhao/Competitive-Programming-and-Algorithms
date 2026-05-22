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
    
    string s;
    string ans = "";
    
    cin >> s;
    
    for(auto c : s){
        ans.pb(c);
        
        if(ans.size() >= 3 && ans.substr(ans.size() - 3) == "ABC") {
            ans.pop_back(); // Remove 'C'
            ans.pop_back(); // Remove 'B'
            ans.pop_back(); // Remove 'A'
        }
    }
    
    cout << ans << endl;
}