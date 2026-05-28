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

        int n, m;
        cin >> n >> m;
        multiset<ll> tickets;

        for(int i = 0; i < n; i++) {
                ll pr;
                cin >> pr;
                tickets.insert(pr);
        }

        for(int i = 0; i < m; i++) {
                ll cl;
                cin >> cl;

                auto it = tickets.upper_bound(cl);
                if(tickets.begin() == it){
                        cout << "-1" << endl;
                }else{
                        it--;
                        cout << *it << endl;
                        tickets.erase(it);
                }
        }

        return 0;
}