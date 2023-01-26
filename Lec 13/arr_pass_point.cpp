#include <iostream>

using namespace std;

void insertSort(int *a, int n){
	
	//insertion sort
	for (int i = 1; i < n; ++i){
		int key = a[i], j = i - 1;
		while(j >= 0 && a[j] > key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}	
}

int main(void){
	int n; 
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; ++i){
		cin>>arr[i];
	}


	cout<<sizeof(arr)<<endl;

	cout<<"Before sorting: ";
	for (int i = 0; i < n; ++i){
		cout<<arr[i]<<' ';
	}
	cout<<endl;

	insertSort(arr, n);

	cout<<"After sorting: ";
	for (int i = 0; i < n; ++i){
		cout<<arr[i]<<' ';
	}
	cout<<endl;

	return 0;
}