/*
 * Complete the 'countSwaps' function below.
 *
 * The function accepts INTEGER_ARRAY a as parameter.
 */

void countSwaps(vector<int> a) {
    int r = 0;
for (int i = 0; i < a.size(); i++) {
    
    for (int j = 0; j < a.size() - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            r++;
        }
    }
    
}