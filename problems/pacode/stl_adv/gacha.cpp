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

    set<string> st;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        st.insert(s);
    }

    cout << st.size() << endl;
    return 0;
}