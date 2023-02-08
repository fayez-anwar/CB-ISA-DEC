class Solution {
public:
    bool exactlyK(vector<int>& nums, int k, int i, int j){
        int n = nums.size();
        vector<int> freq(n+1, 0);

        for(int k = i; k <= j; k++){
            freq[nums[k]]++;
        }

        int uniqueCount = 0;
        for(int k = 0; k <= n; k++){
            if(freq[k] > 0){
                uniqueCount++;
            }
        }

        if(uniqueCount == k){
            return true;
        }
        else{
            return false;
        }
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(exactlyK(nums, k, i, j)){
                    ans++;
                }
            }
        }
        return ans;
    }
};