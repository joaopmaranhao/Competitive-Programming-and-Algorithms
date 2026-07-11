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
                return w > other.w;
        }
};

vector<edge> mst_prim(vector<point>& v, int r = 0){
        int n = v.size();
        
        vector<float> keys(n, INF);
        vector<int> parent(n, -1);
        vector<bool> in_queue(n, true);

        keys[r] = 0.0f;
        priority_queue<pair<float, int>, vector<pair<float, int>>, greater<pair<float, int>>> Q;

        for (int i = 0; i < n; i++) {
                Q.push({keys[i], i});
        }

        while (!Q.empty()) {
                
                auto [c, u] = Q.top();
                Q.pop();

                if (!in_queue[u]) continue;
                
                in_queue[u] = false;

                for (int v_idx = 0; v_idx < n; v_idx++) {
                        if (u == v_idx) continue;

                        float w_u_v = distance(v[u], v[v_idx]);

                        if (in_queue[v_idx] && w_u_v < keys[v_idx]) {
                                parent[v_idx] = u;
                                
                                keys[v_idx] = w_u_v;

                                Q.push({keys[v_idx], v_idx});
                        }
                }
        }
        vector<edge> mst;
        for (int i = 0; i < n; i++) {
                if (parent[i] != -1) {
                        mst.pb({parent[i], i, keys[i]});
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