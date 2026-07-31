#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

using ll = long long;
using ull = unsigned long long;

#define endl '\n'

template <typename T>
size_t binary_search(vector<T>& vec, T target){
    size_t l, r;
    while(l < r){
        size_t m = l + (r-l) / 2;
        if(vec[m] == target) return m;
        if(vec[m] < target){
            l = m;
        }else if(vec[m] > target){
            r = m;
        }
    }
    return -1;
}

int main() { _

    int t;
    cin >> t;

    while (t--) {
        
    }

    return 0;
}