class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0, n = s.size(), j = 0, i;
        // bool freq[128] = {0};
        vector<int> freq(128, -1);
        for(i = 0; i < n; i++){
            if(freq[s[i]] >= j){
                //the char s[i] is in substring j -> i
                j = freq[s[i]] + 1;
            }
            freq[s[i]] = i;
            maxLength = max(maxLength, i - j + 1);
        }
        return maxLength;
    }
};