class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long int x = 0;
        int patch = 0, i = 0;
        while(x < n){
            if(i < nums.size() and nums[i] <= x+1){
                x += nums[i];
                i++;
            }
            else{//i need a patch
                x += (x+1);
                patch++;
            }
        }
        return patch;
    }
};