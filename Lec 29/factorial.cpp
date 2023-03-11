#include <iostream>
using namespace std;

//if n is negative return fact(n) = 1
//if n is more than 10 return fact(n) INT_MAX

int factorial(int n){
	if(n <= 0){
		return 1;
	}
	int ans = n * factorial(n - 1);
	return ans;
}

int main(void){
	int n;
	cin>>n;
	cout<<factorial(n);
	return 0;
}