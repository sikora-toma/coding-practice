// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size()==3) return A[0] * A[1] * A[2];
    sort(A.begin(), A.end());
    vector<int> pos, neg;
    for(int i = 0; i<A.size(); i++) if(A[i]<0) neg.push_back(A[i]); else pos.push_back(A[i]);
    if(pos.size()==A.size() || neg.size()==1)
        return pos[pos.size()-1] * pos[pos.size()-2] * pos[pos.size()-3];
    if(neg.size()==A.size())
        return neg[neg.size()-3] * neg[neg.size()-2] * neg[neg.size()-1];
    if(neg.size()>=2){
        if(pos.size()>=3)
            return max(pos[pos.size()-1] * pos[pos.size()-2] * pos[pos.size()-3],
            neg[0] * neg[1] * pos[pos.size()-1]);
        return neg[0] * neg[1] * pos[pos.size()-1];
    } else{
        return pos[pos.size()-1] * pos[pos.size()-2] * pos[pos.size()-3];
    }
}