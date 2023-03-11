#include <iostream>
using namespace std;

void printSeries(int start, int end){
	//base case
	if(start > end){
		return;
	}
	//work
	cout<<start<<' ';

	//recursive call
	printSeries(start + 1, end);
}

void printSeries2(int n){
	if(n == 0){
		return;
	}
	
	printSeries2(n - 1);

	cout<<n<<' ';
}

int main(void){
	int n;
	cin>>n;
	// printSeries(1, n);
	printSeries2(n);
	return 0;
}