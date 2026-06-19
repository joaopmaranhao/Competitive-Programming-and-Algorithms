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

int n = 100000000;

vector<bool> sieve(int n){
        vector<bool> primes(n + 1, true);
        primes[0] = primes[1] = false;
        for(int i = 2; i <= n; i++){
                if(primes[i] && (ll)i * i <= n){
                        for(int j = i * i; j <= n; j += i){
                                primes[j] = false;
                        }
                }
        }
        return primes;
}

int main(){ _
    
        vector<bool> primes = sieve(n);
        int counts = 0;
        for(int i = 2; i < n; i++){
                if(primes[i]){
                        counts++;
                        if((counts - 1) % 100 == 0){
                                cout << i << endl;
                        }
                }
        }

        return 0;
}