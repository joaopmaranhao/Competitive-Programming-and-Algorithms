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

template<typename T>
struct heap {
        vector<T> heap_array;

        heap(vector<T>& v){
                heap_array = v;
                build_heap();
        }

        void build_heap(){
                for(int i = heap_array.size() / 2 - 1; i >= 0; i--){
                        heapify(i);
                }
        }

        void heapify(int i){
                int largest = i;
                int left = 2 * i + 1;
                int right = 2 * i + 2;

                if(left < heap_array.size() && heap_array[left] > heap_array[largest]){
                        largest = left;
                }
                if(right < heap_array.size() && heap_array[right] > heap_array[largest]){
                        largest = right;
                }
                if(largest != i){
                        swap(heap_array[i], heap_array[largest]);
                        heapify(largest);
                }
        }

};

void heapify(vector<int>& v, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && v[left] > v[largest]) largest = left;
    if (right < n && v[right] > v[largest]) largest = right;

    if (largest != i) {
        swap(v[i], v[largest]);
        heapify(v, n, largest);
    }
}

void heap_sort(vector<int>& v) {
    int n = v.size();

    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(v, n, i);
    }

    for (int i = n - 1; i > 0; i--) {
        swap(v[0], v[i]);        
        heapify(v, i, 0); 
    }
} 

int main(){ _

    
        int n;
        cin >> n;
        
        vector<int> v(n);
        
        for(int i = 0; i < n; i++){
                cin >> v[i];
        }
        
        heap_sort(v);
        
        for(auto& a : v){
                cout << a << " ";
        }
        cout << endl;
    
        return 0;
}