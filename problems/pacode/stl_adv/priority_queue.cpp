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

int main(){ _

    priority_queue<ll> pq;
    string linha;

    while(getline(cin, linha)){
        if (linha == "end") break;
        if (linha.empty()) continue;

        istringstream iss(linha);
        string cmd;
        iss >> cmd;

        if(cmd == "insert"){
            ll n;
            iss >> n;
            pq.push(n);
        } else if(cmd == "extract"){
            if(!pq.empty()){
                cout << pq.top() << endl;
                pq.pop();                 
            }
        } else {
            throw runtime_error("[ERROR] - Invalid Command");
        }
    }
    return 0;
}