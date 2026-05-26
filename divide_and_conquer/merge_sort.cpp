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


vector<ll> merge(vector<ll>& A, int l, int r, int m) {

        vector<ll> L(A.begin(), A.begin() + m);
        vector<ll> R(A.begin() + m + 1, A.end());

        L.pb(LINF);
        R.pb(LINF);

        //Gotta implement later
}

vector<ll> MergeSort(vector<ll>& A, int l, int r) {

        if(A.size() == 1){
                return A;
        }

        int m = l + (r - l) / 2;
        MergeSort(A, l, m);
        MergeSort(A, m + 1, r);
        merge(A, l, r, m);

        return A;
}