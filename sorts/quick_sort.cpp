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

int partition(vector<int>& v, int l, int r){
    int pivot = v[l]; //escolhe o pivô
    int i = l - 1;
    int j = r + 1;
    //esquema de particionamento de Hoare, é bastante eficiente
    while(true){
        do{
            i++; //caminha o ponteiro da esquerda para achar valores maiores que o pivô
        }while(v[i] < pivot);
        do{
            j--; //caminha o ponteiro da direita para achar valores menores que o pivô
        }while(v[j] > pivot);
        
        if(i >= j){
            return j; //para quando i e j chegam um no outro
        }
        swap(v[i], v[j]); //troca os elementos
    }
}

void quick_sort(vector<int>& v, int l, int r){
    if(l < r){
        int q = partition(v, l, r); //recebe indice do pivô para particionamento
        quick_sort(v, l, q); //partição esquerda
        quick_sort(v, q + 1, r); //partição direita
    }
}

int main(){ _
    
    int n;
    cin >> n;
    
    vector<int> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    quick_sort(v, 0, n - 1);
    
    for(auto& a : v){
        cout << a << " ";
    }
}