#include <iostream>
using namespace std;

bool checkSorted(int arr[], int i, int n){
	//base case
	//stop and return true when only one element left
	if(i == n - 1){
		//we are at last index
		return true;
	}

	bool currentElements = (arr[i] <= arr[i+1]);//work
	bool subAhead = checkSorted(arr, i + 1, n);//recursive call

	if(currentElements and subAhead){
		//sorted..
		return true;
	}
	//unsorted..
	return false;
}

int main(void){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	bool ans = checkSorted(arr, 0, n);

	if(ans){
		cout<<"sorted";
	}
	else{
		cout<<"not-sorted";
	}
	return 0;
}