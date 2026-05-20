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
        string s;

        cin >> n;
        cin >> s;

        map<char, int> char_counts;

        for(int i = 0; i < n; i++){
                char_counts[s[i]]++;
        }

        int ones = char_counts['n'];
        int zeros = char_counts['z'];

        for(int i = 0; i < ones; i++){
                cout << "1 ";
        }

        for(int i = 0; i < zeros; i++){
                cout << "0 ";
        }

        cout << endl;

        return 0;
}