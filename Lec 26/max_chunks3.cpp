class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int max_splits = 0, max_val = -1, val_sum = 0, idx_sum = 0;
        for(int i = 0; i < n; i++){
            idx_sum += i;
            val_sum += arr[i];
            if(val_sum == idx_sum){
                max_splits++;
            }
        }
        return max_splits;
    }
};