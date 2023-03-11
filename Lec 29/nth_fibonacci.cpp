#include <iostream>
using namespace std;

int fibonacci(int n){
	//base case
	if(n < 0){
		cout<<"Negative Terms don't exist in the series";
		return 0;
	}
	if(n == 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}

	//recursive work/call
	int ans = fibonacci(n - 1) + fibonacci(n - 2);
	return ans;
}

int main(void){
	int n;
	cin>>n;
	cout<<fibonacci(n);
	return 0;
}