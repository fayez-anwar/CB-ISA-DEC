#include <iostream>

using namespace std;

int main(void){
	int n;
	cin>>n;

	int fact = 1;

	for(int i = 1; i <= n; i++){
		fact = fact * i;
	}

	for(int i = n; i >= 2; i--){
		fact = fact * i;
	}

	cout<<fact;

	return 0;
}