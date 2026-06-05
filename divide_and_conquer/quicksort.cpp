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

int partition(vector<ll>& vec, int l, int r){

        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> dist(l, r);

        int pivo = vec[dist(gen)];

        int i = l - 1;
        int j = r + 1;

        while(1){
                do{
                        i++;
                }while(vec[i] < pivo);

                do{
                        j--;
                }while(vec[i] < pivo);

                if(i >= j){
                        return j;
                }

                int temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
        }
}

int quick_sort(vector<ll> vec, int l, int r){
        if(l < r){
                
                int q = partition(vec, l, r);
                quick_sort(vec, l, q);
                quick_sort(vec, q + 1, r);
        }
}

int main(){ _

        int n;
        cin >> n;
        
        vector<ll> arr(n);

        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> distr(1, 100); 

        for(int i = 0; i < n; i++){
                arr[i] = distr(gen);
        }

        cout << "Array: " << endl << "[ ";
        for(int i = 0; i < n; i++){
                if(i == n - 1) cout << arr[i] << " ]" << endl;
                else cout << arr[i] << ", ";
        }

        quick_sort(arr, 0, arr.size() - 1);

        cout << "Array Ordenado: " << endl << "[ ";
        for(int i = 0; i < n; i++){
                if(i == n - 1) cout << arr[i] << " ]" << endl;
                else cout << arr[i] << ", ";
        }
    
        return 0;
}