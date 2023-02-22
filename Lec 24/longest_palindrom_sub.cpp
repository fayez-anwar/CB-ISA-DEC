class Solution {
public:
    string longestPalindrome(string s) {
        int maxLength = 1, n = s.length();
        string ans;
        ans.push_back(s[0]);

        //odd-length palindromes
        for(int c = 0; c < n; c++){
            int l = c - 1, r = c + 1;
            while(l >= 0 and r < n){
                if(s[l] == s[r]){
                    if(r - l + 1 > maxLength){
                        maxLength = r - l + 1;
                        ans = s.substr(l, maxLength);
                    }
                    l--;
                    r++;
                }
                else{
                    break;
                }
            }
            l = c, r = c + 1;
            while(l >= 0 and r < n){
                if(s[l] == s[r]){
                    if(r - l + 1 > maxLength){
                        maxLength = r - l + 1;
                        ans = s.substr(l, maxLength);
                    }
                    l--;
                    r++;
                }
                else{
                    break;
                }
            }
        }

        // //even-length palindromes
        // for(int i = 0; i < n - 1; i++){
            
        // }

        return ans;
    }
};