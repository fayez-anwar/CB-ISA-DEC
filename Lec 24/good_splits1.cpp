class Solution {
public:
    int distinctInRange(int l, int r, string s){
        int count = 0;
        int freq[26] = {0};
        for(int i = l; i <= r; i++){
            freq[s[i]-'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(freq[i] > 0){
                count++;
            }
        }
        return count;
    }

    int numSplits(string s) {
        int good_splits = 0, n = s.length();
        for(int i = 0; i <= n - 2; i++){
            if(distinctInRange(0, i, s) == distinctInRange(i+1, n-1, s)){
                good_splits++;
            }
        }
        return good_splits;
    }
};