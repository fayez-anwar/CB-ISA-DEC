class Solution {
public:
    bool isPalindrome(string &s, int i, int j){
        while(i < j){
            if(s[i] != s[j])
                return false;
            i++, j--;
        }
        return true;
    }

    void solve(string &s, int i, vector<string> &curr, vector<vector<string>> &ans){
        //base case
        if(i == s.length()){
            ans.push_back(curr);
            return;
        }

        //work
        for(int j = i; j < s.length(); j++){
            if(isPalindrome(s, i, j)){
                //its possible to get a solution with this partition
                curr.push_back(s.substr(i, j-i+1));
                solve(s, j+1, curr, ans);//recursive call
                curr.pop_back();//backtrack
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> curr;
        solve(s, 0, curr, ans);
        return ans;
    }
};