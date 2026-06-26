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

int main() {
 
        uint32 n;
        cin >> n;

        bitset<32> b(n);

        cout << b << endl;
        cout << ~b << endl;
        cout << (b << 1) << endl;
        cout << (b >> 1) << endl;

        return 0;
}