/*
 * Complete the 'twoStrings' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

string twoStrings(string s1, string s2) {
    set<char> s;
    for(auto i : s1) s.insert(i);
    for(auto i : s) if(s2.find(i)!=string::npos) return "YES";
    return "NO";
}