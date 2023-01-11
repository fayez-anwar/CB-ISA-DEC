#include <iostream>
using namespace std;

int main(void){

	//1. input a character
	char c;
	cin>>c;

	//2. determine whether it is 
	//lowercase
	//uppercase
	//digit
	//symbol

	if(c >= 'a' && c <= 'z'){
		cout<<"lowercase";
	}
	else if(c >= 'A' && c <= 'Z'){
		cout<<"uppercase";
	}
	else if(c >= '0' && c <= '9'){
		cout<<"digit";
	}
	else{
		cout<<"symbol";
	}

	return 0;
}