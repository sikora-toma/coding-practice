typedef struct t{
    int i;
    long s;
} t;

int compare(t a, t b){
    if(b.i>a.i) return 1;
    if(b.i==a.i && b.s>a.s) return 1;
    return 0;
}

long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<t> ts;
    for(int i = 0; i<queries.size(); i++){
        t begin;
        begin.i = queries[i][0];
        begin.s = queries[i][2];
        t end;
        end.i = queries[i][1]+1;
        end.s = -queries[i][2];
        ts.push_back(begin); ts.push_back(end);
    }
    sort(ts.begin(), ts.end(), compare);
    long m=0, c = 0;
    for(int i = 0; i<ts.size(); i++){
        c+=ts[i].s;
        if(m<c) m=c;
    }
    return m;
}