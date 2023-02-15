class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<bool> visited(n+1, false);
        vector<int> ans;//vector with size initially 0, i.e. no elements
        for(int i = 0; i < n; i++){
            int x = abs(nums[i]) - 1;
            if(nums[x] < 0){//repeated
                ans.push_back(x+1);
            }
            nums[x] *= -1;
        }
        return ans;
    }
};