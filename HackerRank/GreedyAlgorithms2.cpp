int comp(vector<int> a, vector<int> b){
    if(a[1]<b[1]) return 0;
    else if(a[1]>b[1]) return 1;
    if(a[0]>b[0]) return 0;
    return 1;
}

int luckBalance(int k, vector<vector<int>> contests) {
    int luck = 0;
    sort(contests.begin(), contests.end(), comp);
    for(auto i : contests) cout << i[0] << " " << i[1] << endl;
    int imp = 0;
    for(auto i : contests) if(i[1]==1) imp++; else break;
    imp -=k;
    for(auto i : contests){
        if(imp>0 && i[1]==1){
            luck-=i[0];
            imp--;
        } else luck += i[0];
    }
    return luck;
}