#include <iostream>

using namespace std;

void reverseInRange(int arr[], int l, int r){
	int numOfElements = r-l+1;
	for (int i = 0; i < numOfElements/2; ++i){
		swap(arr[l+i], arr[r-i]);
	}
}

int main(void){
	//Q Reverse an array

	int n; 
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; ++i){
		cin>>arr[i];
	}
	int l, r;
	cin>>l>>r;

	//to reverse
	reverseInRange(arr, l, r);

	for (int i = 0; i < n; ++i){
		cout<<arr[i]<<' ';
	}

	return 0;
}