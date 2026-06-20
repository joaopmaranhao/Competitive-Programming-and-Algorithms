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

template <typename T>
struct Queue{
        vector<T> keys;
        int front_;
        int back_;

        Queue(){
                front_ = 0;
                back_ = 0;
        }
        Queue(int n) : Queue() {
                keys.assign(n, 0);
        }

        bool empty(){
                return front_ == back_;
        }
        bool full(){
                return (front_ + 1) % keys.size() == back_;
        }

        void enqueue(T x){
                if(!full()){
                        keys[back_] = x;
                        back_ = (back_ + 1) % keys.size();
                }else{
                        int antigo_tamanho = keys.size();
                        int novo_tamanho = antigo_tamanho == 0 ? 4 : antigo_tamanho * 2;
                        
                        vector<T> novo_keys(novo_tamanho);
                        int i = 0;
                        while (!empty()) {
                                novo_keys[i++] = front();
                                dequeue();
                        }
                        
                        keys = move(novo_keys);
                        front_ = 0;
                        back_ = i; 
                        
                        keys[back_] = x;
                        back_ = (back_ + 1) % keys.size(); 
                }
        }
        T dequeue(){
                if(!empty()){
                        T ret = keys[front_];
                        front_ = (front_ + 1) % keys.size();
                        return ret;
                }else{
                        throw runtime_error("Empty queue");
                }
        }
        T back(){
                int idx = (back_ - 1 + keys.size()) % keys.size();
                return keys[idx];
        }
        T front(){
                return keys[front_];
        }
};


int main(){ _
        
        int n; cin >> n;
        Queue<int> q(n);

        cout << q.empty() << endl;

        for(int i = 0; i < n; i++) {
                int tmp;
                cin >> tmp;
                q.enqueue(tmp);
        }

        cout << q.full() << endl;

        cout << q.front() << " " << q.back() << endl;

        for(int i = 0; i < n; i++) {
                cout << q.dequeue() << " ";
        }
        cout << endl;

        return 0;
}