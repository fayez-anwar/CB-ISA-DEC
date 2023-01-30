#include <iostream>
using namespace std;

void reverseInRange(int arr[], int l, int r){
	int numOfElements = r-l+1;
	for (int i = 0; i < numOfElements/2; ++i){
		swap(arr[l+i], arr[r-i]);
	}
}

int main(void){

	int n; 
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; ++i){
		cin>>arr[i];
	}
	int rotations;
	cin>>rotations;

	//method2
	reverseInRange(arr, 0, n-1);
	reverseInRange(arr, rotations, n-1);
	reverseInRange(arr, 0, rotations-1);
	

	for (int i = 0; i < n; ++i){
		cout<<arr[i]<<' ';
	}

	return 0;
}