#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(string s){
	int n = s.length();

	for (int i = 0; i < n/2; ++i){
		if(s[i] != s[n-1-i]){
			return false;//not palindrome
		}
	}
	return true;//palindrome
}

int main(void){
	// char s[100];
	string s;
	cin>>s;

	cout<<palindrome(s);

	// int n = s.length();
	// int n = strlen(s);

	// bool isPalindrome = true;
	// for (int i = 0; i < n/2; ++i){
	// 	if(s[i] != s[n-1-i]){
	// 		isPalindrome = false;
	// 	}
	// }

	// cout<<isPalindrome;

	return 0;
}