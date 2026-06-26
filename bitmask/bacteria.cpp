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

/*
        Well, this needs more explaining than 4 lines of code, the idea
        behind the algorithm is simple, each day multiplies the number of bacteria by 2,
        so it is basically a left shift, since you can oly put one bacteria in a day
        each bit can only be inserted in the first position, what we want is to find
        the number of days we have to put a bacteria in tthe box, wich by the structure of the problem
        you can deduce it is the number of bits set as 1 in the binary representation of the number
*/

int main(){ _

        uint32 n;
        cin >> n;
        bitset<32> b(n);

        cout << b.count() << endl;

        return 0;
}