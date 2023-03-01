#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n = s.size();
    bool freq[26] = {0};

    int count = 1;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]){
            count++;
        }
        else{
            if(count%2 == 1){
                //last char ... s[i-1] is working
                freq[s[i-1] - 'a'] = true;
            }
            count = 1;
        }
    }
    if(count%2 == 1){
        //last char ... s[n-1] is working
        freq[s[n-1] - 'a'] = true;
    }

    for(int i = 0; i < 26; i++){
        if(freq[i] == true){
            cout<<(char)('a' + i);
        }
    }
}
