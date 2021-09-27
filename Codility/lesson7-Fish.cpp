// you can use includes, for example:
#include <stack>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    stack<int> u, d;
    for(int i = 0; i<A.size(); i++){
        if(B[i]==0){
            if(d.empty()){
                u.push(i);
            }
            else if(A[d.top()]>A[i]){
            } else{
                while(!d.empty() && A[d.top()]<A[i]) d.pop();
                u.push(i);
            }
        } else {
            d.push(i);
        }
    }
    return d.size()+u.size();
}