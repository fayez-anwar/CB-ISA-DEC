class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size(), l = 0, r = n - 1, mid, ans = nums[0];
        while(l < r){
            mid = l + (r-l)/2;
            if(nums[mid] > nums[n-1]){
                //in part 1
                l = mid + 1;
            }
            else{
                //in part 2
                // ans = min(ans, nums[mid]);
                r = mid;
            }
        }
        return nums[l];//return nums[r];
    }
};