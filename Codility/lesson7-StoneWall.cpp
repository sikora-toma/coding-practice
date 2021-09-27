// you can use includes, for example:
#include <stack>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &H) {
    // write your code in C++14 (g++ 6.2.0)
    stack<int> peaks;
    int s = 0;
    peaks.push(0);
    H.push_back(0);
    for(int i = 0; i<H.size(); i++){
        if(peaks.top()<H[i]){
            peaks.push(H[i]);
        } else if(peaks.top()==H[i]){
            continue;
        } else if(peaks.top()>H[i]){
            while(peaks.top()>H[i]){
                peaks.pop();
                s++;
            }
            if(peaks.top()!=H[i])   peaks.push(H[i]);
        }
    }
    return s;
}