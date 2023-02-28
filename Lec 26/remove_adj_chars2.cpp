class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        int j = 0;
        for(int i = 0; i < n; i++){
            s[j] = s[i];
            if(j > 0 and s[j] == s[j-1]){
                j -= 2;
            }
            j++;
        }
        return s.substr(0, j);
    }
};