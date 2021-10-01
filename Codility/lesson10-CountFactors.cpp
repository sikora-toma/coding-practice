// you can use includes, for example:
// #include <algorithm>
#include<math.h>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    if(N==1) return 1;
    if(N==2) return 2;
    if(N==3) return 2;
    // write your code in C++14 (g++ 6.2.0)
    int n = 0;
    for(int i = 1; i<sqrt(N); i++) if(N%i==0) n+=2;
    if(roundf(sqrt(N))==sqrt(N)) n++;
    return n;
}