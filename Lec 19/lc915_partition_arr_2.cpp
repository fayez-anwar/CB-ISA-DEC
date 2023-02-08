class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();

        int maxLeft = nums[0], curr_max = nums[0], length = 1;

        for(int i = 1; i < n; i++){
            if(nums[i] < curr_max){
                length = i + 1;
                if(curr_max < maxLeft){
                    curr_max = maxLeft;
                }
            }
            else{
                maxLeft = max(maxLeft, nums[i]);
            }
        }
        return length;
    }
};