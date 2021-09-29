// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size()==1) return A[0];
    int check = 0;
    for(int i = 0; i<A.size(); i++){
        if(A[i]>0){
            check = 1;
            break;
        }
    }
    if(!check) return *(max_element(A.begin(), A.end()));
    int m = A[0], current = 0;
    for(int i = 0; i<A.size(); i++){
        if(A[i]<0 && current+A[i]<=0){
            current = 0;
        } else{
            current+=A[i];
        }
        if(current>m) m = current;
    }
    if(current>m) return current;
    return m;
}