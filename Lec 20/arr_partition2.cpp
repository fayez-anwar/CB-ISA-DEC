class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size(), sum = 0;

        vector<int> freq(20001, 0);

        int shift = 10000;

        for(int i = 0; i < n; i++){
            freq[nums[i]+shift]++;
        }

        bool left_over = false;

        for(int i = 0; i < 20001; i++){
            if(freq[i] > 0){
                sum += (i-shift)*((freq[i]-left_over+1)/2);
                left_over = (freq[i]+left_over)%2;
            }
        }

        return sum;
    }
};