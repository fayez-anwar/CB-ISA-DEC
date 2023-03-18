#include <iostream>
using namespace std;

double power(double a, double b){
	if(b < 0){
		return 1/power(a, -b);
	}
	if(b == 0){
		return 1;
	}
	return a * power(a, b - 1);
}

double fast_power(double a, int b){
	if(b < 0){
		return 1/power(a, -b);
	}
	if(b == 0){
		return 1;
	}
	if(b == 1){
		return a;
	}
	double var = fast_power(a, b/2);
	if((int)b%2 == 1){
		return var * var * a;
	}
	return var * var;
}

int main(void){
	int a, b;
	cin>>a>>b;
	// cout<<power(a, b);
	cout<<fast_power(a, b);
	return 0;
}