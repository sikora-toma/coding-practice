// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    if(A.size()==1 && A[0]==1) return 2;
    if(A.size()==1) return 1;
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(), A.end());
    int one_present=0;
    for(int i = 0; i<A.size()-1; i++){
        if(A[i]<=0 || A[i]==A[i+1]) continue;
        if(A[i]==1) one_present=1;
        if(A[i+1]!=A[i]+1 && one_present) return A[i]+1;
    }
    if(one_present)
        return A[A.size()-1]+1;
    else
        return 1;
}