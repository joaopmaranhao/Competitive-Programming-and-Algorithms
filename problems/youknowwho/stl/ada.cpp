#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

using ll = long long;
using ull = unsigned long long;

#define pb push_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define endl '\n'

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

int main() { _

    int q;
    cin >> q;

    deque<int> d;
    bool rev = false;

    while(q--){
        string cmd;
        cin >> cmd;

        if(cmd == "back"){
            if(d.empty()) cout << "No job for Ada?" << endl;
            else {
                cout << (rev ? d.front() : d.back()) << endl;
                rev ? d.pop_front() : d.pop_back();
            }
        }else if(cmd == "front"){
            if(d.empty()) cout << "No job for Ada?" << endl;
            else {
                cout << (rev ? d.back() : d.front()) << endl;
                rev ? d.pop_back() : d.pop_front();
            }
        }else if(cmd == "reverse"){
            rev = !rev;
        }else if(cmd == "push_back"){
            int n; cin >> n;
            rev ? d.push_front(n) : d.push_back(n);
        }else if(cmd == "toFront"){
            int n; cin >> n;
            rev ? d.push_back(n) : d.push_front(n);
        }
    }

    return 0;
}