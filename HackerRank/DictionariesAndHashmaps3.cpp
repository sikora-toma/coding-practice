int sherlockAndAnagrams(string s) {
    cout << "ay" << endl;
    vector<int> hashes;
    int res = 0;
    hash<string> hasher;
    for(int i = 1; i<s.size(); i++){
        for(int j = 0; j<s.size()-i+1; j++){
            string t = s.substr(j, i);
            sort(t.begin(), t.end());
            int h = hasher(t);
            cout << t << " " << h << endl;
            for(int k = 0; k<hashes.size(); k++) if(hashes[k]==h) {res++; }
            hashes.push_back(h);
        }
    }
    sort(s.begin(), s.end());
    cout << s[s.size()-1] << endl;
    return res;
}
