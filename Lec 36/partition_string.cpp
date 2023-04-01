#include <iostream>
#include <cstring>
using namespace std;

int main(void){
	string s;
	cin>>s;
	int n = s.size();
	int last[26];
	
	// memset(last, -1, sizeof(last));
	for (int i = 0; i < 26; ++i){
		last[i] = -1;
	}

	for (int i = 0; i < n; ++i){
		last[s[i]-'a'] = i;
	}


	int maxLastIndex = -1, previousPart = -1;
	for (int i = 0; i < n; ++i){
		maxLastIndex = max(maxLastIndex, last[s[i]-'a']);
		if(maxLastIndex == i){//partition at this index
			cout<<(i - previousPart)<<' ';
			previousPart = i;
		}
	}

}