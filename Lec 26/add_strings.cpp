class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = num1.size(), n2 = num2.size();
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        string ans;
        int sum, carry = 0;
        for(int i = 0; i < n1 or i < n2; i++){
            sum = carry;
            if(i < n1){
                sum += (num1[i] - '0');
            }
            if(i < n2){
                sum += (num2[i] - '0');
            }
            ans.push_back(sum%10 + '0');
            carry = sum/10;
        }
        if(carry == 1){
            ans.push_back('1');
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};