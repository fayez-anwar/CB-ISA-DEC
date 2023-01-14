#include <iostream>

using namespace std;

int main(void){

	int n;
	cin>>n;

	int arr[n];

	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	cout<<"Unsorted Array: ";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<' ';
	}
	cout<<endl;

	//insertion sort
	for(int i = 1; i < n; i++){
		//i will denote the element which we have
		//to place at its correct position in
		//sorted left-part of array
		int key = arr[i];
		int j = i - 1;
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
	
	cout<<"Sorted Array: ";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<' ';
	}
	cout<<endl;

	return 0;
}