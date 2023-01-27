#include <iostream>

using namespace std;

int main(void){
	char str[100];
	cin>>str;
	// cout<<str;

	int len = 0;
	while(str[len] != '\0'){
		len++;
	}

	// //reversing
	// char str2[100];
	// int j = len - 1;
	// for (int i = 0; i < len; ++i){
	// 	str2[i] = str[j];
	// 	j--;
	// }
	// str2[len] = '\0';	

	// // cout<<str<<endl;
	// // cout<<str2<<endl;

	// //comparing
	// bool isPalindrome = true;
	// for (int i = 0; i < len; ++i){
	// 	if(str[i] != str2[i]){
	// 		isPalindrome = false;
	// 	}
	// }

	// cout<<isPalindrome<<endl;


	//method2
	bool isPalindrome = true;
	for (int i = 0; i < len/2; ++i){
		if(str[i] != str[len-1-i]){
			isPalindrome = false;
		}
	}
	cout<<isPalindrome<<endl;

	return 0;
}