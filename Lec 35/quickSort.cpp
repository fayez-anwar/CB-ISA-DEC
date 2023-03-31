#include <iostream>
using namespace std;

int partition(int arr[], int start, int end){
	int pivot = arr[end];

	int j = start - 1;
	for (int i = start; i < end; ++i){
		if(arr[i] < pivot){
			swap(arr[i], arr[++j]);
		}
	}

	swap(arr[j+1], arr[end]);
	return j+1;
}

void quickSort(int *arr, int start, int end){
	//base case
	if(start >= end){
		//not more than one element => already sorted
		return;
	}

	int p = partition(arr, start, end);//work

	//recursive calls
	quickSort(arr, start, p-1);//left sub-array
	quickSort(arr, p+1, end);//right sub-array
}

int main(void){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	quickSort(arr, 0, n - 1);

	for(int i = 0; i < n; i++){
		cout<<arr[i]<<' ';
	}

	return 0;
}