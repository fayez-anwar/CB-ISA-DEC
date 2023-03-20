#include <iostream>
using namespace std;

int converter(string s){
	//base case
	// if(s.length() == 0){
	// 	return 0;
	// }
	if(s.empty()){
		return 0;
	}

	string str = s;
	str.pop_back();
	int last_digit = s.back() - '0';//s[s.length() - 1] - '0';
	//recursive case
	int x = converter(str);
	//work
	x = x * 10;
	x = x + last_digit;
	return x;
}

int main(void){
	string s;
	cin>>s;
	int x = converter(s);
	cout<<x;
	return 0;
}