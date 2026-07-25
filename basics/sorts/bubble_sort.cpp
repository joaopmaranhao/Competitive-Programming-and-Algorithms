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

void bubble_sort(vector<int>& v){
        int n = v.size();
        if (n <= 1) return;
        
        for(int i = 0; i < n; i++){
                bool swap_happened = false;
                for(int j = 1; j < n - i; j++){
                        if(v[j] < v[j - 1]){
                                swap(v[j], v[j - 1]);
                                swap_happened = true;
                        }
                        }
                        if(!swap_happened) return;
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
        
        for(auto& e : v){
                cout << e << " ";
        }
        cout << '\n';
        bubble_sort(v);
        
        for(auto& e : v){
                cout << e << " ";
        }
        cout << '\n';
        
        return 0;
}