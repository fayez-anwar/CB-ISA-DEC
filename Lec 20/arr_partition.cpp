class Solution {
public:
    void selection_sort(vector<int>& nums){
        int n = nums.size();
        for(int i = 0; i < n - 1; i++){
            int min_index = i;
            for(int j = i + 1; j < n; j++){
                if(nums[j] < nums[min_index]){
                    min_index = j;
                }
            }
            swap(nums[i], nums[min_index]);
        }
    }

    int arrayPairSum(vector<int>& nums) {
        // selection_sort(nums);
        sort(nums.begin(), nums.end());//for vectors
        // sort(arr, arr+n);//for arrays
        int n = nums.size(), sum = 0;
        for(int i = 0; i < n; i += 2){
            sum += nums[i];
        }
        return sum;
    }
};