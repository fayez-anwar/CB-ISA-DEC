class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int maxUpto[n], minAfter[n];
        maxUpto[0] = arr[0];
        for(int i = 1; i < n; i++){
            maxUpto[i] = max(maxUpto[i-1], arr[i]);
        }

        minAfter[n-1] = INT_MAX;
        for(int i = n - 2; i >= 0; i--){
            minAfter[i] = min(minAfter[i+1], arr[i+1]);
        }

        int max_splits = 0;
        for(int i = 0; i < n; i++){
            if(maxUpto[i] < minAfter[i]){
                max_splits++;
            }
        }
        return max_splits;
    }
};