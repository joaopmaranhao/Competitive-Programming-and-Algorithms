#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

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
