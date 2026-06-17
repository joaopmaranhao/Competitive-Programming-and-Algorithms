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

void selection_sort(vector<int>& v){
        int n = v.size();
        for(int i = 0; i < n - 1; i++){
                int i_min = i;
                
                for(int j = i + 1; j < n;  j++){
                if(v[j] < v[i_min]){ 
                        i_min = j;
                }
                }
                swap(v[i], v[i_min]);
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

        selection_sort(v);
        
        for(auto& e : v){
                cout << e << " ";
        }
        cout << '\n';
        
        return 0;
}