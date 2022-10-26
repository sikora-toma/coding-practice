// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr) {
    int res = 0, i = 0, temp;
    while(i<arr.size()){
        if(arr[i]!=i+1){
            res++;
            if(arr[arr[i]-1]==i+1){
                arr[arr[i]-1] = arr[i];
                i++;
            } else{
                temp = arr[arr[i]-1];
                arr[arr[i]-1] = arr[i];
                arr[i] = temp;
            }
        }
        else i++;
    }
    if(res==0) return 0;
    return res;
}
