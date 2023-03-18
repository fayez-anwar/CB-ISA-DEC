#include <iostream>
using namespace std;

string word[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};


void toWord(int num){
	//base case
	if(num < 10){
		cout<<word[num]<<' ';
		return;
	}

	//recursive call--print num except last digit
	toWord(num/10);

	//work--print last digit
	cout<<word[num%10]<<' ';
}

int main(void){
	int num;
	cin>>num;
	toWord(num);
	return 0;
}