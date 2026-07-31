#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

using ll = long long;
using ull = unsigned long long;

#define endl '\n'

int fib(int n){
	if(n <= 2){
		return 1;
	}
	return fib(n-1) + fib(n-2);
}

int fib(int n, vector<int>& memo){
	if(n <= 1){
		return n;
	}
	if(memo[n] == 0){
		memo[n] = fib(n-1, memo) + fib(n-2, memo);
	}
	return memo[n];
}

int fib(int n, bool isit){
	vector<int> memo(n);
	memo[0] = 0;
	memo[1] = 1;
	
	for(int i = 2; i <= n; i++){
		memo[i] = memo[i-1] + memo[i-2];
	}
	return memo[n];
}

int fib(int n, char op){
	vector<int> memo(3);
	memo[0] = 0;
	memo[1] = 1;
	
	for(int i = 2; i <= n; i++){
		memo[i%3] = memo[(i-1)%3] + memo[(i-2)%3];
	}
	return memo[n%3];
}

int main() { _
    int n; 
    cin>>n;
    cout << fib(n, true) << endl;
    return 0;
}