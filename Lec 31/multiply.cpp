#include <iostream>
using namespace std;

int mul = 0;

void multiply(int a, int b){
	//negatives
	if(a < 0){
		multiply(-a, b);
		mul *= -1;
		return;
	}
	if(b < 0){
		multiply(a, -b);
		mul *= -1;
		return;
	}
	//optimizing
	if(a < b){
		multiply(b, a);
		return;
	}
	//base case
	if(b == 0){
		return;
	}
	//work
	mul += a;
	//recursive case
	multiply(a, b - 1);
	return;
}

int main(void){
	int a, b;
	cin>>a>>b;
	multiply(a, b);
	cout<<mul;
	return 0;
}

// int multiply2(int a, int b){
// 	if(a < b){
// 		return multiply2(b, a);
// 	}
// 	if(b == 0){
// 		return 0;
// 	}
// 	return a + multiply2(a, b-1);
// }