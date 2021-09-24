// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size()<3) return 0;
    sort(A.begin(), A.end());
    for(int i = 0; i<A.size()-2; i++){
        if((double)A[i]+(double)A[i+1]>(double)A[i+2]) return 1;
    }
    return 0;
}