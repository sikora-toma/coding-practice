// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

typedef struct point{
    long x;
    bool start;
} point;

bool compare(point a, point b){
    if(a.x<b.x) return 1;
    if(a.x==b.x && b.start==true) return 0;
    if(a.x==b.x && a.start==true) return 1;
    return 0;
}

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int open = 0, res = 0;
    vector<point> points;
    for(int i = 0; i<A.size(); i++){
        point b, e;
        b.x = i-(long)A[i];   e.x = i+(long)A[i];
        b.start = true; e.start = false;
        points.push_back(b);
        points.push_back(e);
    }
    sort(points.begin(), points.end(), compare);
    for(int i = 0; i<points.size(); i++){
        if(points[i].start){
            open++;
        } else {
            open--;
            res+=open;
            if(res>10000000) return -1;
        }
    }
    return res;
}