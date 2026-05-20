#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

using ll = long long;
using llu = unsigned long long;

int main(){

        //necessary variables
        int n;
        ll temp;
        vector<ll> seq;
        
        //reading the values
        cin >> n;
        
        for(int i = 0; i < n; i++){
                cin >> temp;
                seq.pb(temp);
        }

        //creating the frequency map
        
        map<ll, ll> freq;
        ll to_remove = 0;
 
        for(int i = 0; i < n; i++){
                freq[seq[i]]++;
        }

        //iterates thought the map, if the frequency doesnt match the number it increments
        for(auto& [val, count] : freq){
                if(count >= val) to_remove += count - val;
                else to_remove += count;
        }        

        cout << to_remove << endl;

}