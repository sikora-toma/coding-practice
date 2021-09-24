// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> sol, nums, ones, twos, threes;
    for(int i = 0; i<S.size(); i++) {
        if(S[i]=='A'){
            nums.push_back(1);
            ones.push_back(i);
        }
        else if(S[i]=='C'){
            nums.push_back(2);
            twos.push_back(i);
        }
        else if(S[i]=='G'){
            nums.push_back(3);
            threes.push_back(i);
        }
        else if(S[i]=='T'){
            nums.push_back(4);
        }
    }
    int check = 0;
    for(int i = 0; i<P.size(); i++){
        check = 0;
        for(int j = 0; j<ones.size(); j++){
            if(P[i]<=ones[j] && ones[j]<=Q[i]){
                sol.push_back(1);
                check = 1;
                break;
            }
        }
        if(check) continue;
        for(int j = 0; j<twos.size(); j++){
            if(P[i]<=twos[j] && twos[j]<=Q[i]){
                sol.push_back(2);
                check = 1;
                break;
            }
        }
        if(check) continue;
        for(int j = 0; j<threes.size(); j++){
            if(P[i]<=threes[j] && threes[j]<=Q[i]){
                sol.push_back(3);
                check = 1;
                break;
            }
        }
        if(check) continue;
        sol.push_back(4);
    }
    return sol;
}