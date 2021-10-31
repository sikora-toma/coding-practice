typedef struct t{
    int n;
    long c;
} t;

int comp(t a, t b){
    if(a.c > b.c) return 1;
    return 0;
}

int nonDivisibleSubset(int k, vector<int> s) {
    if(k==1) return 1;
    vector<t> ts(k);
    for(int i = 0; i<ts.size();i++){
        ts[i].c=0;
        ts[i].n = i;
    }
    
    for(auto i : s){
        ts[i%k].c++;
    }
    
    sort(ts.begin(), ts.end(), comp);
    
    for(auto i : ts){
        cout  << i.n << " " << i.c << endl;
    }
    cout << endl;
    
    vector<int> discard;
    
    for(int i = 0; i<ts.size(); i++){
        cout << ts[i].n << " " << ts[i].c << "   ";
        if(find(discard.begin(), discard.end(), ts[i].n)!=discard.end()) ts[i].c = 0;
        else{
            cout << "not found in disc";
            if(k%2==0 && ts[i].n==k/2) ts[i].c=ts[i].c>0?1:0;
            if(ts[i].n%k==0) ts[i].c=ts[i].c>0?1:0;
            else discard.push_back(k-ts[i].n);
        }
        cout << endl;
    }
    int res = 0;
    for(auto i : ts) res += i.c;
    return res;
}
