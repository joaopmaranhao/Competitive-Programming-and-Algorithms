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

vector<string> rst;
string curr;
vector<bool> used;

void backtrack(string s){
        if(curr.length() == s.length()){
                //base case
                rst.pb(curr);
                return;
        }

        for(int i = 0; i < s.length(); i++){

                if(used[i]) continue;
                //prunning
                if(i > 0 && s[i] == s[i - 1] && !used[i - 1]) continue;

                //choice
                used[i] = true;
                curr.pb(s[i]);
                //backtrack
                backtrack(s);
                //undo_choice
                curr.pop_back();
                used[i] = false;
        }
}

int main(){ _

        string s;
        cin >> s;

        sort(all(s));
        used.assign(s.length(), false);

        backtrack(s);

        cout << rst.size() << endl;
        for(auto& st : rst){
                cout << st << endl;
        }

        return 0;
}
