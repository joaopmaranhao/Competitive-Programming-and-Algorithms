#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

using ll = long long;
using llu = unsigned long long;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool isBalanced(string expression){

        stack<char> bracket_stack;

        for(int i = 0; i < expression.length(); i++){
                if(expression[i] == '(' || 
                expression[i] == '[' || 
                expression[i] == '{'){
                        bracket_stack.push(expression[i]);
                }
                else if(expression[i] == ')'){
                        if(bracket_stack.empty() || bracket_stack.top() != '(') return false;
                                bracket_stack.pop();
                }else if(expression[i] == ']'){
                        if(bracket_stack.empty() || bracket_stack.top() != '[') return false;
                                bracket_stack.pop();
                }else if(expression[i] == '}'){
                        if(bracket_stack.empty() || bracket_stack.top() != '{') return false;
                                bracket_stack.pop();
                }
        }

        return bracket_stack.empty();
}

int main(){

        int n;
        string temp;
        vector<string> expressions;

        cin >> n;

        for(int i = 0; i < n; i++){
                cin >> temp;
                expressions.pb(temp);
        }

        for(int i = 0; i < n; i++){
                cout << (isBalanced(expressions[i]) ? "YES" : "NO") << endl;
        }
}