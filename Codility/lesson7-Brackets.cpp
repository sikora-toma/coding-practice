// you can use includes, for example:
#include <string>
#include <stack>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    if(S.size()==0) return 1;
    if(S.size()%2==1) return 0;
    stack<char> s;

    for(int i = 0; i<S.size(); i++){
        if(S[i]=='('){
            s.push('(');
        }
        else if(S[i]==')'){
            if(s.empty() || s.top()!='(') return 0;
            s.pop();
        }
        else if(S[i]=='['){
            s.push('[');
        }
        else if(S[i]==']'){
            if(s.empty() || s.top()!='[') return 0;
            s.pop();
        }
        else if(S[i]=='{'){
            s.push('{');
        }
        else if(S[i]=='}'){
            if(s.empty() || s.top()!='{') return 0;
            s.pop();
        }
    }
    if(s.empty()) return 1;
    return 0;
}