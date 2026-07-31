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

        int m;
        cin >> m;

        vector<bitset<64>> masks(m, bitset<64>(0));

        for(int i = 0; i < m; i++){
                int k, x;
                cin >> k;
                for(int j = 0; j < k; j++) {
                        cin >> x;
                        masks[i][x] = true;
                }
        }

        int q;
        cin >> q;

        while(q--){
                int qt, i, m;
                cin >> qt;

                if(qt == 0) cin >> i;
                else cin >> m;

                auto iso = (qt > 0) ? (b & masks[m]) : bitset<64>(0); //creating the isolate mask
                
                switch(qt){

                        case 0: cout << (b[i] ? 1 : 0) << endl; break; //basic query
                        case 1: b |= masks[m]; break; //sets all from m as 1
                        case 2: b &= ~masks[m]; break; //sets all from m as 0
                        case 3: b ^= masks[m] ; break; //flips all form m
                        case 4: cout << (iso == masks[m] ? 1 : 0) << endl; break; //checks if all in the mask are set
                        case 5: cout << (iso.any() ? 1 : 0) << endl; break; //checks if any in the mask is on
                        case 6: cout << (iso.none() ? 1 : 0) << endl; break; //checks if none are on
                        case 7: cout << iso.count() << endl; break; //checks num of set bits in the mask
                        case 8: cout << iso.to_ullong() << endl; break; //checks number of the mask
                
                }
        }
        return 0;
}