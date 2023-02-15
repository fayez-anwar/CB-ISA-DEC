class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0, n = s.size(), j = 0;
        bool freq[128] = {0};
        for(int i = 0; i < n; i++){
            if(freq[s[i]] == false){
                freq[s[i]] = true;
                maxLength = max(maxLength, i - j + 1);
            }
            else{
                while(j < i and s[j] != s[i]){
                    freq[s[j]] = false;
                    j++;
                }
                j++;//to point to the next index of the matching char.
            }
        }
        return maxLength;
    }
};