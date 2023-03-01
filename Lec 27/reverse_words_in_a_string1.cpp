class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string w;
        vector<string> v;
        for(int i = 0; i < n; i++){
            if(s[i] == ' '){//space
                if(!w.empty()){
                    //it has some words
                    v.push_back(w);
                    w = "";//w is now an empty string
                }
            }
            else{//not a space...s[i] is part of a word
                w.push_back(s[i]);
            }
        }
        if(!w.empty()){
            v.push_back(w);
        }

        int m = v.size();
        string ans;
        for(int i = m - 1; i >= 0; i--){
            ans += v[i];//adding the word
            if(i > 0){
                ans.push_back(' ');
            }
            // ans += ' ';
        }
        return ans;
    }
};