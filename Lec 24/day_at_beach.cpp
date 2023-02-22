#include <iostream>
#include <climits>
using namespace std;

int main(void){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	int leftMax[n];//max element from 0 to i
	leftMax[0] = arr[0];
	for (int i = 1; i < n; ++i){
		leftMax[i] = max(leftMax[i-1], arr[i]);
	}

	int rightMin[n];//min element from i+1 to n-1
	rightMin[n-1] = INT_MAX;
	for (int i = n - 2; i >= 0; --i){
		rightMin[i] = min(rightMin[i+1], arr[i+1]);
	}

	int partitions = 0;

	for (int i = 0; i < n; ++i){
		if(leftMax[i] <= rightMin[i]){
			partitions++;
		}
	}

	cout<<partitions;

	return 0;
}