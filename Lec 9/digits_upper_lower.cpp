#include <bits/stdc++.h>

using namespace std;

int main(void){

	int digits = 0, upperCase = 0, lowerCase = 0;
	int whitespace = 0, special = 0;

	char c;

	cin.get(c);


	while(c != '$'){
		// if(c >= 48 && c <= 57){
		// 	//it's a digit
		// 	digits++;
		// }
		// else if(c >= 65 && c <= 90){
		// 	//uppercase
		// 	upperCase++;
		// }
		// else if(c >= 97 && c <= 122){
		// 	//lowercase
		// 	lowerCase++;
		// }
		// else if(c == 10 || c == 32){
		// 	whitespace++;
		// }
		// else {
		// 	special++;
		// }
		if(c >= '0' && c <= '9'){
			//it's a digit
			digits++;
		}
		else if(c >= 'A' && c <= 'Z'){
			//uppercase
			upperCase++;
		}
		else if(c >= 'a' && c <= 'z'){
			//lowercase
			lowerCase++;
		}
		else if(c == '\n' || c == ' '){
			whitespace++;
		}
		else {
			special++;
		}
		cin.get(c);
	}

	cout<<"Digits: "<<digits<<endl;
	cout<<"UpperCase: "<<upperCase<<endl;
	cout<<"LowerCase: "<<lowerCase<<endl;
	cout<<"Whitespace: "<<whitespace<<endl;
	cout<<"Special Chars: "<<special<<endl;

	return 0;
}