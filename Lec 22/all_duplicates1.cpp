class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<bool> visited(n+1, false);
        vector<int> ans;//vector with size initially 0, i.e. no elements
        for(int i = 0; i < n; i++){
            if(visited[nums[i]]){
                ans.push_back(nums[i]);
            }
            visited[nums[i]] = true;
        }
        return ans;
    }
};