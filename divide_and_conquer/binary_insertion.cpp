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

template <typename T>
void binary_insertion_sort(std::vector<T>& vec) {
    if (vec.empty()) return;

    for (size_t i = 1; i < vec.size(); i++) {
        T pivot = vec[i];
        
        int l = 0;
        int r = i - 1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (pivot < vec[m]) {
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        
        for (int j = i - 1; j >= l; j--) {
            vec[j + 1] = vec[j];
        }
        
        vec[l] = pivot;
    }
}

int main(){ _
    
        return 0;
}