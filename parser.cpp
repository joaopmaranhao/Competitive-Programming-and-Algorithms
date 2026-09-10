#include <bits/stdc++.h>


// a parser for numeric expressions
// syntax
// op -> + | - | * | / | **
// expression: E -> expa op expa
// expa: expa -> expb op expb
// expb: expb -> prim op prim
// prim: num op num
// par: (expression)

using namespace std;

enum tktype{
    INT,
    ADD,
    SUB,
    MUL,
    DIV,
    EXP,
    PARL,
    PARR,
    EOFF
};

struct token{
    string lex;
    int pos;
    tktype type;

    token(string l, int p, tktype t) : 
        lex(l), pos(p), type(t) {}
};

bool isint(string s){
    return !s.empty() && all_of(s.begin(), s.end(), ::isdigit);
}

tktype classify_token(string tk){

    if(isint(tk)) return INT;
    if(tk == "+") return ADD;
    if(tk == "-") return SUB;
    if(tk == "*") return MUL;
    if(tk == "/") return DIV;
    if(tk == "*") return EXP;
    if(tk == "**") return EXP;
    if(tk == "(") return PARL;
    if(tk == ")") return PARL;

    return EOFF;
}

vector<token> read_tokens(string expr){

    vector<token> tokens;
    
    string lex;
    int pos = 0;

    // isso vai dar mais trabalho kkkkkk

    while(iss >> lex){
        pos++;    
        tktype t = classify_token(lex);
        tokens.push_back(token(lex, pos, t));
    }

    return tokens;
}

void dbgtokenizer(vector<token> tks){
    for(auto t : tks){
        cout << t.lex << " " << t.pos << " " << t.type << endl;
    }
}

int main(){


    string exp;
    cin >> exp;

    vector<token> tks = read_tokens(exp);

    dbgtokenizer(tks);

    return 0;
}