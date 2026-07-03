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

        Point& operator[](size_t idx) {
                return path[idx];
        }

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

solution solve(vector<Point> cities){
        
        solution ans;
        int n = cities.size();
        
        vector<bool> visited(n, false);
        
        ans.path.pb(cities[0]);
        visited[0] = true;

        for(int i = 1; i < n; i++){
                Point last = ans.path.back();
                float min_dist = 1e9;
                int idx = -1;

                for(int j = 0; j < n; j++){
                        if(visited[j]) continue;

                        float dist = distance(last, cities[j]);
                        if(dist < min_dist){
                                min_dist = dist;
                                idx = j;
                        }
                }
                visited[idx] = true;
                ans.path.pb(cities[idx]);
        }
        return ans;
}

int main(){ _

        int n;
        cin >> n;

        vector<Point> cities;

        for(int i = 0; i < n; i++){
                string label;
                int x, y;
                cin >> label >> x >> y; 

                Point p(label, x, y);
                cities.pb(p);
        }

        solution ans = solve(cities);
        
        cout << "Solução de custo " << ans.cost() << ": [";
        for(int i = 0; i < ans.path.size(); i++){
                cout << ans[i].label_ << (i == ans.path.size() - 1 ? "" : " -> ");
        }
        cout << " -> " << ans.path.front().label_ << "]" << endl;
    
        return 0;
}