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

solution solve(vector<Point> cities) {
    int n = cities.size();
    solution ans;
    vector<bool> visited(n, false);
    
    // Começamos na cidade 0
    ans.path.pb(cities[0]);
    visited[0] = true;

    // Achamos a cidade 'A' mais distante da cidade 0
    int best_A = -1;
    float max_dist_A = -1e9;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            float dist = distance(cities[0], cities[i]);
            if (dist > max_dist_A) {
                max_dist_A = dist;
                best_A = i;
            }
        }
    }
    ans.path.pb(cities[best_A]);
    visited[best_A] = true;

    // Achamos a cidade 'B' que maximiza o perímetro do triângulo (0, A, B)
    int best_B = -1;
    float max_triangle = -1e9;
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;        
        float dist_total = distance(cities[0], cities[i]) + distance(cities[best_A], cities[i]);
        if (dist_total > max_triangle) {
                max_triangle = dist_total;
                best_B = i;
        }
    }

    ans.path.pb(cities[best_B]);
    visited[best_B] = true;

    // ---- PASSO 2: INSERIR AS CIDADES RESTANTES ONDE FOR MAIS BARATO ----
    
    // Precisamos inserir as n - 3 cidades que sobraram
    for (int step = 3; step < n; step++) {
        float min_insertion_cost = 1e9;
        int best_k = -1;
        int insert_position = -1; // Onde colocar no vetor

        // 1. Varrer todas as cidades não visitadas (k)
        for (int k = 0; k < n; k++) {
            if (visited[k]) continue;

            // 2. Testar colocar k entre cada par de cidades consecutivas (i, j) do ciclo atual
            int m = ans.path.size();
            for (int i = 0; i < m; i++) {
                int j = (i + 1) % m; // O próximo elemento (com wrap-around para fechar o ciclo)
                
                Point city_i = ans.path[i];
                Point city_j = ans.path[j];
                Point city_k = cities[k];

                // Custo de oportunidade: adiciona duas arestas novas, remove uma antiga
                float cost = distance(city_i, city_k) + distance(city_k, city_j) - distance(city_i, city_j);

                if (cost < min_insertion_cost) {
                    min_insertion_cost = cost;
                    best_k = k;
                    insert_position = j; // Inserir antes de j (ou seja, entre i e j)
                }
            }
        }

        // Realiza a inserção da melhor escolha encontrada
        visited[best_k] = true;
        // Se a sua struct solution expõe o vector ou usa herança, você pode dar insert direto:
        ans.path.insert(ans.path.begin() + insert_position, cities[best_k]);
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