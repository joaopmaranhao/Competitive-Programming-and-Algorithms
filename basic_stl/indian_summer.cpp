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
        string temp;
        map<string, int> leaves;

        cin >> n;
        cin.ignore();

        for(int i = 0; i < n; i++){
                getline(cin, temp);
                leaves[temp] = 1;
        }

        cout << leaves.size();
}