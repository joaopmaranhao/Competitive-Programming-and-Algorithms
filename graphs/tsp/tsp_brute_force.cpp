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

struct Point {

        string label_;
        float x_;
        float y_;
        
        Point() = default;
        Point(string l, float x, float y) : label_(l), x_(x), y_(y) {}

        Point operator-(const Point& other) const { return Point("", x_ - other.x_, y_ - other.y_); }
        float dot(const Point& other) const { return x_ * other.x_ + y_ * other.y_; }

        float norm() const { return std::sqrt(this->dot(*this)); }
};
float distance(Point a, Point b){ return (a - b).norm(); }

struct solution {
        // Path used
        vector<Point> path;

        // Cost function of the path
        float cost(){
                if(path.empty()) return 1e9;

                float c = 0;
                for(int i = 0; i < path.size() - 1; i++){
                        c += distance(path[i], path[i+1]);
                }
                c += distance(path.back(), path.front());
                return c;
        }
};


vector<Point> cities;
vector<bool> visited;
solution curr_path;
solution ans;
float min_cost = 1e9;

void backtrack(int u){
        //base case
        if(curr_path.path.size() == cities.size()){
                float curr_cost = curr_path.cost();
                if(curr_cost < min_cost){
                        min_cost = curr_cost;
                        ans = curr_path;
                }
                return;
        }

        for(int v = 0; v < cities.size(); v++){
                if(!visited[v]){
                        //make choice
                        visited[v] = true;
                        curr_path.path.pb(cities[v]);
                        //recursive call
                        backtrack(v);
                        //undo choice
                        curr_path.path.pop_back();
                        visited[v] = false;
                }
        }
}

int main(){ _

        int n;
        cin >> n;

        for(int i = 0; i < n; i++){
                string label;
                int x, y;
                cin >> label >> x >> y; 

                Point p(label, x, y);
                cities.pb(p);
        }

        visited.assign(n, false);
        visited[0] = true;
        curr_path.path.pb(cities[0]);

        backtrack(0);

        cout << "Solução de custo " << min_cost << ": [";
        for(int i = 0; i < ans.path.size(); i++){
                cout << ans.path[i].label_ << (i == ans.path.size() - 1 ? "" : " -> ");
        }
        cout << " -> " << ans.path.front().label_ << "]" << endl;
    
        return 0;
}