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

int main(){

        int t;
        cin >> t;

        while(t--){
                int n;
                cin >> n;
                priority_queue<llu> cards;
                llu temp;

                llu ans = 0;

                for(int i = 0; i < n; i++){
                        cin >> temp;
                        if(temp > 0) {
                                cards.push(temp);
                        }
                        if(temp == 0 && !cards.empty()){
                                ans += cards.top();
                                cards.pop();
                        }
                }

                cout << ans << endl;

        }

        return 0;
}