// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> counters(N,0);
    vector<int> A_stripped;
    for(int i = 0; i<A.size()-1; i++)
        if(!(A[i]==N+1 && A[i+1]==N+1))
            A_stripped.push_back(A[i]);
    A_stripped.push_back(A[A.size()-1]);
    A=A_stripped;
    int m = 0, last_max_counter = 0;
    for(int i = 0; i<A.size(); i++){
        if(A[i]<=N){
            //increase A[i-1]
            counters[A[i]-1]=max(last_max_counter, counters[A[i]-1])+1;
            m = max(m, counters[A[i]-1]);
        }
        else {
            //max counter
            last_max_counter = m;
        }
    }
    for(int i = 0; i<N; i++)
        counters[i]=max(counters[i], last_max_counter);
    return counters;
}