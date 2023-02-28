class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(ans.empty() or ans.back() != s[i]){
                ans.push_back(s[i]);
            }
            else{
                ans.pop_back();
            }
        }
        return ans;
    }
};