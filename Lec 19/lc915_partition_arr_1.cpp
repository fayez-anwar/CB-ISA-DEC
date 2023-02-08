class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        int left[n];//array
        // vector<int> left(n);//vector
        // int right[n];//array
        vector<int> right(n);

        left[0] = nums[0];
        for(int i = 1; i < n; i++){
            if(left[i-1] >= nums[i]){
                left[i] = left[i-1];
            }
            else{
                left[i] = nums[i];
            }
        }

        right[n-1] = nums[n-1];
        for(int i = n-2; i >= 0; i--){
            if(right[i+1] <= nums[i]){
                right[i] = right[i+1];
            }
            else{
                //this is min upto this index
                right[i] = nums[i];
            }
        }

        for(int i = 0; i < n - 1; i++){
            if(left[i] <= right[i+1]){
                return i+1;
            }
        }
        return -11;
    }
};