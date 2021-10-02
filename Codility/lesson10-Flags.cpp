// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> peaks;
    for(int i = 1; i<A.size()-1; i++) if(A[i-1]<A[i] && A[i+1]<A[i]) peaks.push_back(i);
    if(peaks.size()==0) return 0;
    if(peaks.size()==1) return 1;
    int count, current, m = 0;
    for(int i = peaks.size(); i>0; i--){
        current = 0;
        count = 1;
        for(int j = 1; j<peaks.size(); j++){
            if(peaks[j]-peaks[current]>=i){
                count++;
                current = j;
            }
        }
        if(count==i && m<count) m = count;
    }
    return m;
}