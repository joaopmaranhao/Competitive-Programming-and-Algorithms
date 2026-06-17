/*
Just a implementation of merge sort by hand after an algorithms class

## What does it even do?
The merge sort uses the principle of divide and conquer, it sorts an array by
dividing it in subarrays recursively, and after the arrays get to the base case (size 1)
the merge sort rebuilds the array by merging the arrays and sorting them with the
two pointers technique.

##Time complexity
By iteractive analisys, the recurrency of mergesort follows the recursive formula:
```
T(n) = T(\floor{n/2}) + T(\ceil{n/2}) + cn
```
For powwers of two, wich makes the analisys simpler, the formula is
```
T(n) = 2T(n/2) + n
```
By iteractive analisys it becomes:
```
T(n) = nlog(n) + n = O(nlog(n))
```
So it becomes faster than traditional sorts like the selectionsort, bubblesort and insertionsort, wich are O(n²)
*/

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

void merge(vector<int>& v, int l, int r, int m){
    
    vector<int> left(v.begin() + l, v.begin() + m + 1);
    vector<int> right(v.begin() + m + 1, v.begin() + r + 1);
    
    left.push_back(INF);
    right.push_back(INF);
    
    int i = 0;
    int j = 0;
    
    for(int k = l; k <= r; k++){
        if(left[i] <= right[j]) v[k] = left[i++];
        else v[k] = right[j++];
    }
}

void merge_sort(vector<int>& v, int l, int r){
    if(l >= r){
        return;
    }
    int m = l + (r - l) / 2;
    
    merge_sort(v, l, m);
    merge_sort(v, m + 1, r);
    merge(v, l, r, m);
}

void merge_sort(vector<int>& v){
    merge_sort(v, 0, v.size() - 1);
}


int main() { _
        int n;
        cin >> n;
        
        vector<int> v(n);
        
        for(int i = 0; i < n; i++){
                cin >> v[i];
        }

        merge_sort(v);
        
        for(auto& e : v){
                cout << e << " ";
        }
        cout << '\n';
        
        return 0;
}