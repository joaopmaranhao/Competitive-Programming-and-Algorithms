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

struct point {

        string label_;
        float x_;
        float y_;
        
        point() = default;
        point(string l, float x, float y) : label_(l), x_(x), y_(y) {}

        point operator-(const point& other) const { return point("", x_ - other.x_, y_ - other.y_); }
        float dot(const point& other) const { return x_ * other.x_ + y_ * other.y_; }

        float norm() const { return sqrt(this->dot(*this)); }
};
float distance(point a, point b){ return (a - b).norm(); }

struct edge{
        int u, v;
        float w;

        bool operator<(const edge& other) {
                return w < other.w;
        }
};

vector<edge> mst_kruskal(vector<point>& v, vector<edge>& full){
        int n = v.size();
        vector<edge> mst;

        DSU forest(n);
        sort(all(full)); //ordena as arestas pelo peso

        //insere as arestas seguras mais baratas
        for(auto& e: full){
                if(forest.unite(e.u, e.v)){
                        mst.pb(e);
                }
        }
        return mst;
}


int main(){ _ 

        int n;
        cin >> n;

        vector<point> v;
        for(int i = 0; i < n; i++){
                string label;
                int x, y;
                cin >> label >> x >> y; 

                point p(label, x, y);
                v.pb(p);
        }
        //calcula os pesos com distancia euclidiana
        vector<edge> full;
        for(int i = 0; i < n; i++) {
                for(int j = i + 1; i < n; i++) {
                        edge e;
                        e.u = i;
                        e.v = j;
                        e.w = distance(v[i], v[j]);
                        full.pb(e);
                }      
        }
        
        return 0;
}