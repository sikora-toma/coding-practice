// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    if(A.size()<1) return 0;
    // write your code in C++14 (g++ 6.2.0)
    int mx = 0, mn = 0, res = 0;
    for(int i = 0; i<A.size();i++)
        if(A[i]>A[mx]) mx = i;
        else if(A[i]<A[mn])mn=i;
    if(mx>mn) return A[mx]-A[mn];

    mx = mn = 0;
    res = 0;
    for(int i = 1; i<A.size(); i++){
        if(A[i]<A[mn]) {
            mn = i;
        } else {
            if(res<A[i]-A[mn]){
                res = A[i]-A[mn];
            }
        }
    }
    return res;
}