#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define MAXN 1e6

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

template <typename T>
struct Stack {
        
        vector<T> keys;
        int top_idx;
        //standart coonstructor, it initializes the top as -1
        Stack(){
                top_idx = -1;
        }
        //you can preset the stack size with an int
        Stack(int n){
                keys.assign(n, T());
                top_idx = -1;
        }
        //check functions
        bool empty(){
                return top_idx == -1;
        }
        bool full(){
                if (keys.empty()) return true;
                return top_idx == (int)keys.size() - 1; 
        }
        //basic stack operations, all of them are O(1)
        void push(T x){
                if(!full()){
                        keys[++top_idx] = x; //pre increments so the value is pushed correctly
                } else {
                        int size = keys.empty() ? 1 : keys.size() * 2; //resizes so we have a dynamic stack 
                        keys.resize(size);
                        push(x); //secure recursion, it only happens 1 time
                }
        }
        T pop(){
                return keys[top_idx--]; //Returns the top-most value and after decrements the top
        }
        T top(){
                return keys[top_idx]; //returns the to-most value without decrement
        }
};

int main(){ _

        char tmp;
        Stack<char> s;
        while(cin >> tmp){
                s.push(tmp);
        }
        while(!s.empty()){
                cout << s.pop();
        }
        cout << endl;
    
        return 0;
}