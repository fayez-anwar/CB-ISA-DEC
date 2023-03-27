#include <iostream>
using namespace std;

int noOfWays(int n, int k){
	//base case
	if(n == 0){
		return 1;//proper way to eat flowers
	}

	int redChoice = noOfWays(n-1, k);//recur
	int whiteChoice = 0;
	if(n >= k){
	//only eat white when there are atleast k flowers
		whiteChoice = noOfWays(n-k, k);//recur
	}

	return redChoice + whiteChoice;//work
}

int main(void){
	int n, k;
	cin>>n>>k;
	cout<<noOfWays(n, k);
	return 0;
}

