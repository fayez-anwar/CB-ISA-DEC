#include <iostream>
using namespace std;

float to_farenheit(int c, int x){
	// float far = ((5.0/9)*c) - 32;
	// return far;
	// x stores temp + 5
	return ((5.0/9)*c) - 32;
}


int main(void){

	// celsius to farenheit table??

	int start = 0, end = 300;

	for(int temp = start; temp <= end; temp++){
		
		float f = to_farenheit(temp, temp + 5);

		cout<<temp<<" "<<f<<endl;
	}


	return 0;
}

scope/visibility