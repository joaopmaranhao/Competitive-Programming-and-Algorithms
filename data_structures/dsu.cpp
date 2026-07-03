#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

using namespace std;

struct DSU {

        vector<int> parent;
        vector<int> rank;

        DSU(int n){
                parent.resize(n);
                rank.resize(n, 0);
                for(int i = 0; i < n; i++){
                        make_set(i);
                }
        }

        void make_set(int v){
                if(v >= parent.size()){
                        parent.resize(v + 1);
                        rank.resize(v + 1);
                }
                parent[v] = v;
                rank[v] = 0;
        }

        int find(int v){
                if(parent[v] == v) return v;
                return parent[v] = find(parent[v]); //path compression
        }
        bool unite(int v, int u){
                int rv = find(v);
                int ru = find(u);

                if(rv == ru) return false;

                if(rank[v] > rank[u]){
                        parent[u] = rv;
                }else if(rank[v] < rank[u]){
                        parent[v] = ru;
                }else{
                        parent[u] = rv;
                        rank[rv]++;
                }
                return true;
        }

};

int main(){ _
    
        return 0;
}