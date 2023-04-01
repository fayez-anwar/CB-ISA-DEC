#include <iostream>
using namespace std;

bool isVowel(char c){
	if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
		return true;
	if(c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U')
		return true;
	return false;
}

int main(void){
	string s;
	cin>>s;

	int n = s.size();
	int l = 0, r = n - 1;
	while(l < r){
		while(l < r and !isVowel(s[l]))
			l++;

		while(l < r and !isVowel(s[r]))
			r--;

		if(l < r and isVowel(s[l]) and isVowel(s[r])){
			swap(s[l], s[r]);
			l++, r--;
		}
	}

	cout<<s<<endl;

	return 0;
}