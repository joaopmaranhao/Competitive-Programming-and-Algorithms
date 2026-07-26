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

struct Item {
    int idx;
    float value;
    float weight;

    Item() = default;
    Item(int id, float v, float w) : idx(id), value(v), weight(w) {}
};

int n;
float max_weight;
vector<Item> items;

float best_value = -1.0f;
vector<bool> best_sol;

vector<bool> current_sol;

void backtrack(int i, float current_weight, float current_value) {
    if (current_weight > max_weight) {
        return;
    }

    if (i == n) {
        if (current_value > best_value) {
            best_value = current_value;
            best_sol = current_sol;
        }
        return;
    }

    current_sol[i] = true;
    backtrack(i + 1, current_weight + items[i].weight, current_value + items[i].value);

    current_sol[i] = false;
    backtrack(i + 1, current_weight, current_value);
}

int main() { _
    if (!(cin >> n >> max_weight)) return 0;

    items.resize(n);
    current_sol.assign(n, false);
    best_sol.assign(n, false);

    for (int i = 0; i < n; i++) {
        float v, w;
        cin >> v >> w;
        items[i] = Item(i, v, w);
    }

    backtrack(0, 0.0f, 0.0f);

    // Exibe o resultado
    cout << "Valor Maximo: " << best_value << endl;
    cout << "Itens escolhidos (indices originais): ";
    for (int i = 0; i < n; i++) {
        if (best_sol[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}