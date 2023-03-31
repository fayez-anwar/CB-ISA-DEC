class Solution {
public:
    bool solve(long long n1, long long n2, string s){
        if(s.size() == 0)
            return false;

        long long n3 = n1 + n2;
        string next = to_string(n3);
        int l = next.length();

        if(s.size() < l)//next number can't be found in the string
            return false;

        if(s.size() == l){
            if(s == next)//found end of string
                return true;
            return false;//next not a part of s
        }

        //s has more numbers
        if(s.substr(0, l) == next){
            return solve(n2, n3, s.substr(l));
        }
        return false;//next is not a part of s
    }

    bool isAdditiveNumber(string num) {
        int n = num.size();
        // if(num[0] == '0') return false;//ensuring first number is valid
        //no leading zeros
        for(int i = 1; i < n/2; i++){
            long long n1 = stol(num.substr(0, i));
            if(i > 1 and num[0] == '0') break;
        // if(num[i] == '0') continue;//no leading zero for second number
            for(int j = i + 1; j < n; j++){
                long long n2 = stol(num.substr(i, j-i));
                if(j-i > 1 and num[i] == '0') break;
                if(solve(n1, n2, num.substr(j))){
                    return true;
                }
            }
        }
        return false;
    }
};





























