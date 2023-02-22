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
        int distinctUpto[n], distinctAfter[n];

        int dist1 = 0;
        bool freq1[26] = {0};
        for(int i = 0; i < n; i++){
            if(freq1[s[i] - 'a'] == false){
                dist1++;
                freq1[s[i] - 'a'] = true;
            }
            distinctUpto[i] = dist1;
        }

        int dist2 = 0;
        bool freq2[26] = {0};
        distinctAfter[n-1] = 0;
        for(int i = n - 2; i >= 0; i--){
            if(freq2[s[i+1] - 'a'] == false){
                dist2++;
                freq2[s[i+1] - 'a'] = true;
            }
            distinctAfter[i] = dist2;
        }

        for(int i = 0; i <= n - 2; i++){
            // if(distinctInRange(0, i, s) == distinctInRange(i+1, n-1, s)){
            //     good_splits++;
            // }
            if(distinctUpto[i] == distinctAfter[i]){
                good_splits++;
            }
        }
        return good_splits;
    }
};