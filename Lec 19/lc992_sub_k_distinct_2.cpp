class Solution {
public:
    void findLeftMost(vector<int>& leftMost, vector<int>& a, int k){
        int n = a.size(), j = 0, distinct = 0;
        
        vector<int> freq(n+1, 0);
        
        for(int i = 0; i < n; i++){
            //if the value is seen first time in (j, i)
            if(freq[a[i]] == 0){
                distinct++;
            }
            freq[a[i]]++;//increase frequency

            //incase distinct > k
            while(distinct > k){
                freq[a[j]]--;//we exclude a[j] from the current range
                //of values
                if(freq[a[j]] == 0){
                    distinct--;
                }
                j++;
            }
            leftMost[i] = j;
        }
    }


    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;

        //find u[i] and l[i] for each index
        vector<int> u(n);
        vector<int> l(n);

        findLeftMost(l, nums, k);
        findLeftMost(u, nums, k-1);

        for(int i = 0; i < n; i++){
           ans += u[i] - l[i];
        }
        return ans;
    }
};