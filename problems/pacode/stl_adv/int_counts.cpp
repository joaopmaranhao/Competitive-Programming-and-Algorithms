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
 
    int temp;
    map<int,int> freq;
    vector<int> ord;

    while(cin >> temp){
        if(freq[temp] == 0){
            ord.pb(temp);
        }
        freq[temp]++;
    }

    for(auto num : ord){
        cout << num << " " << freq[num] << endl;
    }
    return 0;
}