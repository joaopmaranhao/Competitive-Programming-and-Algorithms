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

bool isop(const string& s) {
    return s == "+" || s == "-" || s == "*" || s == "/"|| s == "^"|| s == "%";
}

int main(){
        
        string expr;
        string token;

        stack<float> stack;

        getline(cin, expr);

        istringstream iss(expr);

        while(iss >> token){
                if(!isop(token)){
                        stack.push(stof(token));
                }else{
                        float a = stack.top();
                        stack.pop();

                        float b = stack.top();
                        stack.pop();

                        float rst;

                        if (token == "+")
                        rst = b + a;
                        else if (token == "-")
                        rst = b - a;
                        else if (token == "*")
                        rst = b * a;
                        else if (token == "/")
                        rst = b / a;
                        else if (token == "^")
                        rst = pow(b, a);
                        else if (token == "%")
                        rst = static_cast<int>(b) % static_cast<int>(a);

                        stack.push(rst);
                }
        }
        cout << fixed << setprecision(1);
        cout << stack.top() << endl;

        return 0;
}