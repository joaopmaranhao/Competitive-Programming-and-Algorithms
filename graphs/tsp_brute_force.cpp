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

        Point operator-(const Point& other) const {
                return {x_ - other.x_, y_ - other.y_};
        }

        float dot(const Point& other) const {
                return x_ * other.x_ + y_ * other.y_;
        }

        float norm() const {
                return std::sqrt(this->dot(*this));
        }
};

float distance(Point a, Point b){
        return (a - b).norm();
}

struct solution {
        vector<Point> path;

        float cost(){
                float c = 0;
                for(int i = 1; i < path.size() - 1; i++){
                        c += distance(path[i], path[i+1]);
                }
        }
};


vector<Point> cities;
solution curr_path;
solution ans;

void backtrack(){
        //base case
        if(curr_path.path.size() == cities.size()){
                if(curr_path.cost() < ans.cost()){
                        ans = curr_path;
                        return;
                }else{
                        return;
                }
        }

        //
}

int main(){ _

        int n;
        cin >> n;

        for(int i = 0; i < n; i++){
                int x, y;
                string label;
                cin >> x >> y >> label; 

                Point p(label, x, y);
                cities.pb(p);
        }

        backtrack();

        cout << "Solução: [";
        for(auto& v : ans){
                cout << v << " ";
        }
        cout << "]" << endl;
    
        return 0;
}