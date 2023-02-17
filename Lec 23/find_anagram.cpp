class Solution {
public:
    bool check_anagram(int f1[], int f2[]){
        for(int i = 0; i < 26; i++){
            if(f1[i] != f2[i]){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int n = s.length(), m = p.length();
        vector<int> v;
        if(m > n){
            return v;
        }

        int freqP[26] = {0};
        for(int i = 0; i < m; i++){
            freqP[p[i]-'a']++;
        }

        int freqS[26] = {0};
        for(int i = 0; i < m; i++){
            freqS[s[i]-'a']++;
        }

        for(int i = m; i < n; i++){
            if(check_anagram(freqP, freqS)){
                v.push_back(i-m);
            }
            freqS[s[i]-'a']++;
            freqS[s[i-m]-'a']--;
        }
        if(check_anagram(freqP, freqS)){
            v.push_back(n-m);
        }
        return v;
    }
};