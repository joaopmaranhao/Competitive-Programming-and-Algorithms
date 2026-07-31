#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

using uint32 = unsigned int;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _

        uint32 a, b;
        cin >> a >> b;

        bitset<32> ab(a), bb(b);
 
        cout << (ab & bb) << endl;
        cout << (ab | bb) << endl;
        cout << (ab ^ bb) << endl;
        
        return 0;
}