#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

#define MAX 100
#define EMPTY_STACK -1

using namespace std;

using ll = long long;
using llu = unsigned long long;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

struct Stack {
public:
        ll keys[MAX];
        int top;

        Stack() : top(EMPTY_STACK) {}

        ll push(ll n){
                top++;
                keys[top] = n;

                return n;
        }

        ll pop() {
                return keys[top--]; 
        }

        ll back(){
                return keys[top];
        }

        int size(){
                return top + 1;
        }

        void clear(){
                top = EMPTY_STACK;
                cout << "ok" << endl;
        }
};

int main(){


        Stack s;

        int n;
        string line;
        string cmd;
        int key;
        
        
        while(1){
                
                getline(cin, line);

                istringstream iss(line);
                iss >> cmd >> key;


                if(cmd == "push"){
                        s.push(key);
                        cout << "ok" << endl;
                }
                else if(cmd == "pop"){
                        cout << s.pop() << endl;
                }
                else if(cmd == "back"){
                        cout << s.back() << endl;
                }
                else if(cmd == "back"){
                        cout << s.back() << endl;
                }
                else if(cmd == "size"){
                        cout << s.size() << endl;
                }
                else if(cmd == "clear"){
                        s.clear();
                }
                else if(cmd == "exit"){
                        cout << "bye" << endl;
                        return 0;
                }else{
                        throw runtime_error("What?\n");
                }
        }
}