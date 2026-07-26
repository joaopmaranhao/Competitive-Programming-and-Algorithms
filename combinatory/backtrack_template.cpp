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

template <typename T>

vector<T> rst;


void backtrack(vector<T> params){
        if(base_case){
                rst.pb(solution);
        }

        for(int i = 0; i < n; i++){
                if(violates_cond) continue;

                make_choice();
                backtrack(new_params);
                undo_choice();
        }
}

int main(){ _
    
        return 0;
}