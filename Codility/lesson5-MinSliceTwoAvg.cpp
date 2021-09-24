// you can use includes, for example:
#include <algorithm>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

typedef struct Res{
    int index;
    float avg;
} Res;


    // find average of vector
    // find max position
    // call itself on the subvectors
void vector_search(vector<int> &v, vector<int> &A, int a, int b, vector<Res> &r){
    //cout << a << " " << b << endl;
    if(a>=b) return;
    float avg = (v[b]-(a==0?0:v[a-1]))/(float)(b-a+1);
    Res res;
    res.index = a;
    res.avg = avg;
    //cout << " " << avg << " ";
    r.push_back(res);
    if(a+1==b) return;

    int m = max_element(A.begin()+a, A.begin()+b+1) - A.begin();
    //cout << m << endl;
    vector_search(v, A, a, m-1, r);
    vector_search(v, A, m+1, b, r);
    return;
}

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> sums;
    int current = 0;
    for(int i = 0; i<A.size(); i++){
        current += A[i];
        sums.push_back(current);
    }
    int index=0;
    vector<Res> r;
    vector_search(sums, A, 0, sums.size()-1, r);
    //cout << endl;
    float m = r[0].avg;
    for(int i = 0; i<r.size(); i++){
        //cout << r[i].index << " " << r[i].avg << " so far:" << r[index].avg << endl;
        if(m>r[i].avg){
            index = r[i].index;
            m = r[i].avg;
           // cout << "yep" << endl;
        }
    }
    return index;
}