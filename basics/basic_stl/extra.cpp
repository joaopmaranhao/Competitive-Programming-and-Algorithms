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

int substring(string &s, string &p) {
        int count = 0;
    
        stack<char> st;

        for (char c : s) {
                st.push(c);
                
                if (st.size() >= p.size()) {
                bool match = true;
                for (int i = 0; i < p.size(); i++) {
                        if (st.top() != p[p.size() - 1 - i]) {
                        match = false;
                        break;
                        }
                        st.pop();
                }
                if (match) count++;
                }
        }
    
    return count;
}

int main(){ _

        string s, p;
        cin >> s >> p;

        cout << substring(s, p) << endl;

        return 0;
}