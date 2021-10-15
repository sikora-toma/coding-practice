
int minimumAbsoluteDifference(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int res = abs(arr[1]-arr[0]);
    for(int i = 1; i < arr.size(); i++){
        if(abs(arr[i+1]-arr[i])<res) res = abs(arr[i+1]-arr[i]);
    }
    return res;
}