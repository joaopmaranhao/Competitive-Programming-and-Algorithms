#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
        
        bitset<64> b(0);

        int q;
        cin >> q;

        while(q--){
                int qt, i;
                cin >> qt;

                if(qt >= 0 && qt <= 3) cin >> i;

                switch(qt){

                        case 0: cout << (b[i] ? 1 : 0) << endl; break;
                        case 1: b[i] = true; break;
                        case 2: b[i] = false; break;
                        case 3: b[i] = !b[i]; break;
                        case 4: cout << (b.all() ? 1 : 0) << endl; break;
                        case 5: cout << (b.any() ? 1 : 0) << endl; break;
                        case 6: cout << (b.none() ? 1 : 0) << endl; break;
                        case 7: cout << b.count() << endl; break;
                        case 8: cout << b.to_ullong() << endl; break;
                }
        }

        return 0;
}