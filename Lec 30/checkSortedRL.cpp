#include <iostream>
using namespace std;

bool checkSorted(int arr[], int n){
	//base case
	//stop and return true when only one element left
	if(n == 0){
		//we are at first index
		return true;
	}

	bool currentElements = (arr[n-1] <= arr[n]);//work
	bool subAhead = checkSorted(arr, n - 1);//recursive call

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

	bool ans = checkSorted(arr, n - 1);

	if(ans){
		cout<<"sorted";
	}
	else{
		cout<<"not-sorted";
	}
	return 0;
}