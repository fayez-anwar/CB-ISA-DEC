#include <iostream>
using namespace std;

void rotateOnce(int arr[], int n){
	int last_element = arr[n-1];
	for (int i = n-2; i >= 0; --i){
		arr[i+1] = arr[i];
	}
	arr[0] = last_element;
}

int main(void){
	//Q Rotate an array
	
	// 9 1 5 7 6 2 4
	// rotate by one place to right
	// 4 9 1 5 7 6 2
	// rotate by one place to right
	// 2 4 9 1 5 7 6
	// rotate by one place to right
	// 6 2 4 9 1 5 7 
	int n; 
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; ++i){
		cin>>arr[i];
	}
	int rotations;
	cin>>rotations;

	//method1

	for (int i = 0; i < rotations; ++i){
		//shift all elements to the right..
		rotateOnce(arr, n);
	}

	for (int i = 0; i < n; ++i){
		cout<<arr[i]<<' ';
	}

	return 0;
}