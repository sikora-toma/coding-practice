// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    int a = 0;
    for(int i = 0; i<S.size(); i++)
    {
        if(S[i]=='('){
            a++;
        }
        else if(S[i]==')'){
            a--;
            if(a<0) return 0;
        }
    }
    if(a==0) return 1;
    return 0;
}