void minimumBribes(vector<int> q) {
    int res = 0;
    vector<int> t;
    for(int i = 0; i<q.size(); i++) t.push_back(i);
    for(int i = 0; i<q.size()-1; i++){
        if(q[i]-1>i+2) {
            cout << "Too chaotic" << endl;
            return;
        }
        //other solution
        if(q[i]-1==t[i]) continue;
        if(q[i]-1==t[i+1]){
            res++;
            int temp = t[i];
            t[i] = t[i+1];
            t[i+1] = temp;
        }
        if(i<q.size()-2 && q[i]-1==t[i+2]){
            res+=2;
            int temp = t[i+1];
            t[i+1] = t[i+2];
            t[i+2] = temp;
            temp = t[i];
            t[i] = t[i+1];
            t[i+1] = temp;
        }
    }
    cout << res << endl;
}
