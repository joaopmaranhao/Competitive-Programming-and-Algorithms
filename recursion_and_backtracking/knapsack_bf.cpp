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
vector<pair<ll, ll>> itens;
ll cap;
ll highest = 0;
vector<bool> sln;
vector<bool> curr;

void backtrack(int idx, ll currw, ll currv) {
    
    if (currw > cap) {
        return;
    }
    
    if (idx == itens.size()) {
        if (currv > highest) {
            highest = currv;
            sln = curr;
        }
        return;
    }
    
    curr.push_back(false); 
    backtrack(idx + 1, currw, currv);
    curr.pop_back();      

    curr.push_back(true); 
    backtrack(idx + 1, currw + itens[idx].first, currv + itens[idx].second);
    curr.pop_back();       
}

int main() { _
    int n;
    cin >> n >> cap;
    itens.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> itens[i].first >> itens[i].second;
    }

    backtrack(0, 0, 0);

    cout << "Maior valor: " << highest << endl;
    
    cout << "Vetor solucao: ";
    for (int i = 0; i < sln.size(); i++) {
        cout << sln[i] << " ";
    }
    cout << endl;

    return 0;
}