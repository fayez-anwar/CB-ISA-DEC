class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int max_splits = 0, max_val = -1;
        for(int i = 0; i < n; i++){
            max_val = max(arr[i], max_val);
            if(max_val == i){
                max_splits++;
            }
        }
        return max_splits;
    }
};