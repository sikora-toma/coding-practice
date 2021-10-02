// you can use includes, for example:
// #include <algorithm>
#include<math.h>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    for(int i = sqrt(N); i>=1; i++){
        if(N%i==0) return 2*i+2*(N/i);
    }
}