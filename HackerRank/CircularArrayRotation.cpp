
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<int> res;
    k = k%a.size();
    if(k==0){
        for(int i = 0; i<queries.size(); i++)
            res.push_back(a[queries[i]]);
        return res;    
    }
    for(int i = 0; i<queries.size(); i++)
        res.push_back(a[(queries[i]-(k-a.size()))%a.size()]);
    return res;
}