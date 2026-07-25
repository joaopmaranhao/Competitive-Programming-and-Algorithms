#include <bits/stdc++.h>
#define _ cin.tie(0);ios_base::sync_with_stdio(false);

using namespace std;

using ll = long long;

// Heapify adaptado para trabalhar em um subvetor [l...r]
void heapify(vector<ll>& v, int n, int i, int l){
    int largest = i;
    int lc = 2 * i + 1;
    int rc = 2 * i + 2;

    // IMPORTANTE: v[l + ...] ajusta o índice para o subvetor correto
    if(lc < n && v[l + lc] > v[l + largest]) largest = lc;
    if(rc < n && v[l + rc] > v[l + largest]) largest = rc;

    if(largest != i){
        swap(v[l + i], v[l + largest]);
        heapify(v, n, largest, l);
    }
}

// HeapSort adaptado para ordenar apenas o pedaço [l...r]
void heap_sort_range(vector<ll>& v, int l, int r){
    int n = r - l + 1;

    // Constrói o heap
    for(int i = n / 2 - 1; i >= 0; i--) {
        heapify(v, n, i, l);
    }
    // Extrai os elementos do heap um por um
    for (int i = n - 1; i > 0; i--) {
        swap(v[l + 0], v[l + i]);        
        heapify(v, i, 0, l); 
    }
}

void insertion(vector<ll>& v, int l, int r){
    for(int i = l + 1; i <= r; i++){
        ll key = v[i];
        int j = i - 1;
        while(j >= l && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}

int partition(vector<ll>& v, int l, int r){
    int mid = l + (r - l) / 2;
    swap(v[l], v[mid]);
    
    ll pivot = v[l];
    int i = l - 1;
    int j = r + 1;

    while(true){
        do { i++; } while(v[i] < pivot);
        do { j--; } while(v[j] > pivot);

        if(i >= j) return j;
        swap(v[i], v[j]);
    }
}

// depth_limit controla quando mudar para o HeapSort
void jp_sort(vector<ll>& v, int l, int r, int depth_limit){
    if(l >= r) return; 
    
    if(r - l <= 32) {
        insertion(v, l, r); 
        return;
    }

    if(depth_limit == 0){
        heap_sort_range(v, l, r);
        return; 
    }

    int q = partition(v, l, r);
    jp_sort(v, l, q, depth_limit - 1);
    jp_sort(v, q + 1, r, depth_limit - 1);
}

int main(){ _

    int n;
    if (!(cin >> n)) return 0;
    vector<ll> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int dl = 2 * __lg(n);

    jp_sort(v, 0, v.size() - 1, dl);

    for(auto& e : v){
        cout << e << ' ';
    }
    cout << endl;

    return 0;
}