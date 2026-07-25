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


void insertion_sort(vector<int>& v){
        int key = 0;
        int n = v.size();
        if(n <= 1) return;
        
        for(int i = 1; i < n; i++){
                key = v[i];
                int j = i - 1;
                //troca até inserir o pivô na posição certa
                while(j >= 0 && v[j] > key){
                        v[j + 1] = v[j];
                        j--;
                }
                v[j + 1] = key;
        }
        return;
}

int main() { _
        int n;
        cin >> n;
        
        vector<int> v(n);
        
        for(int i = 0; i < n; i++){
                cin >> v[i];
        }
        

        cout << '\n';
        insertion_sort(v);
        
        for(auto& e : v){
                cout << e << " ";
        }
        cout << '\n';
        
        return 0;
}
