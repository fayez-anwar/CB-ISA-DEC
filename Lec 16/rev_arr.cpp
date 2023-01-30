#include <iostream>

using namespace std;

void reverse(int arr[], int n){
	for (int i = 0; i < n/2; ++i){
		swap(arr[i], arr[n-1-i]);
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

	//to reverse
	reverse(arr, n);

	for (int i = 0; i < n; ++i){
		cout<<arr[i]<<' ';
	}

	return 0;
}