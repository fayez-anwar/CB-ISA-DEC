#include <iostream>
using namespace std;

bool isPrime(int n){
	//if n is prime number --> true
	//if n is not prime number --> false

	//checking for even numbers
	if(n == 2){
		return true;//prime
	}
	if(n%2 == 0 && n != 2){//n is not 2 and even
		return false;//not prime
	}

	//check for odd numbers
	for (int i = 3; i < n; i += 2){
		if(n%i == 0){
			return false;//it has a factor i
			//which is neither 1 nor n
			//so it is not prime 
		}
	}
	return true;//no factor found --> prime
}

int main(void){
	int n;
	cin>>n;

	for (int i = 2; i <= n; ++i){
		if(isPrime(i)){// i is prime
			cout<<i<<' ';
		}
	}

	return 0;
}