#include<iostream>
using namespace std;

int noOfWays(int stepsLeft){
	//base case...where we can directly reach final step
	if(stepsLeft == 1){
		return 1;
	}
	if(stepsLeft == 2){
		return 2;
	}

	//taking a single step
	int ways1 = noOfWays(stepsLeft - 1);

	//taking a jump of 2 steps
	int ways2 = noOfWays(stepsLeft - 2);

	return ways1 + ways2;
}

int main() {
	int stepsLeft;
	cin>>stepsLeft;
	cout<<noOfWays(stepsLeft);
	return 0;
}