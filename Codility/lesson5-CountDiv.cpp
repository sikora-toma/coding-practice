// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    if(A==B && A%K==0) return 1;
    if(A==B && A%K!=0) return 0;
    if(A%K!=0)
        A=(A/K)*K+K;
    return (B-A)/K+1;
}