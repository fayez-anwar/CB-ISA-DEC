#include <iostream>
#include <cstring>
using namespace std;

int main(void){
	int t;
	cin>>t;
	while(t--){
		string keyboard, word;
		cin>>keyboard>>word;

		// int position[128]
		int position[26];

		for (int i = 0; i < 26; ++i){
			position[keyboard[i] - 97] = i;
		}

		int ans = 0, n = word.length();
		for(int i = 1; i < n; i++){
			ans += abs(position[word[i]-97] - position[word[i-1]-97]);
		}
		cout<<ans<<endl;
	}
	return 0;
}