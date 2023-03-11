#include <iostream>
using namespace std;

void printReverseSeries(int start, int end){
	//base case
	if(start > end){
		return;
	}
	//work
	cout<<end<<' ';

	//recursive call
	printReverseSeries(start, end - 1);
}

void printReverseSeries2(int n){
	if(n == 0){
		return;
	}
	cout<<n<<' ';
	printReverseSeries2(n - 1);
}

int main(void){
	int n;
	cin>>n;
	// printReverseSeries(1, n);
	printReverseSeries2(n);
	return 0;
}