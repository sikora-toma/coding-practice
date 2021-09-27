// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size()==0) return -1;
    vector<int> b = A;
    sort(b.begin(), b.end());
    int counter = 0, current = b[0], m = 0, m_n = current;
    for(int i = 0; i<b.size(); i++){
        if(b[i]==current){
            counter++;
        } else{
            if(m<counter){
                m_n = current;
                m = counter;
            }
            current = b[i];
            counter = 1;
        }
    }
    if(m<counter){
        m_n = current;
        m = counter;
    }
    if(m>A.size()/(float)2) return find(A.begin(), A.end(), m_n) - A.begin();
    return -1;
}