int comp(int a, int b){
    if(a>b) return 1;
    return 0;
}


vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    /*vector<int> res, uni;
    std::set<int, greater<int>> temp;
    for(auto i : ranked) temp.insert(i);
    cout << endl;
    
    for(auto i : player){
        temp.insert(i);
        //res.push_back(-(find(uni.rbegin(), uni.rend(), i) - uni.rend()));
        res.push_back(distance(temp.begin(), temp.find(i))+1);
    }
    for(auto i : temp) cout << i << " ";
    return res;*/
    
    vector<int> res;
    for(auto i : player) ranked.push_back(i);
    sort(ranked.begin(), ranked.end(), comp);
    sort(player.begin(), player.end());
    int last = ranked[0]+1, counter = 0;
    for(auto i : ranked){
        if(i!=last){
            counter++;
            if(i==player.back()){
                res.push_back(counter);
                player.pop_back();
                counter--;
            }
            else{
                last = i;
            }
        }
    }
    reverse(res.begin(), res.end());
    return res;
}