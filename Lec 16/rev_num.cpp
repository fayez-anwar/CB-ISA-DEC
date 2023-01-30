#include <iostream>

using namespace std;

int main(void){
	
	// Q. Take input a number, and output its reverse.
	
	long int num, rev_num = 0;
	cin>>num;
	while(num > 0){
		rev_num = (rev_num * 10) + (num%10);
		num /= 10;
	}
	cout<<rev_num;
	return 0;
}