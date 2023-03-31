#include <iostream>
using namespace std;

void merge(int arr[], int start, int end){
	int mid = (start + end)/2;

	int n1 = mid - start + 1, n2 = end - mid;
	int left[n1], right[n2];
	for (int i = 0; i < n1; ++i){
		left[i] = arr[start + i];
	}
	for (int i = 0; i < n2; ++i){
		right[i] = arr[mid+1+i];
	}

	int i = 0, j = 0, idx = start;
	while(i < n1 and j < n2){
		if(left[i] < right[j]){
			arr[idx++] = left[i++];
		}
		else{
			arr[idx++] = right[j++];
		}
	}

	while(i < n1){
		arr[idx++] = left[i++];
	}
	while(j < n2){
		arr[idx++] = right[j++];
	}
}


void mergeSort(int *arr, int start, int end){
	//base case
	if(start >= end){
		//not more than one element => already sorted
		return;
	}

	int mid = (start + end)/2;

	//recursive calls
	mergeSort(arr, start, mid);//left sub-array
	mergeSort(arr, mid+1, end);//right sub-array

	//combine the merged parts
	merge(arr, start, end);
}

int main(void){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	mergeSort(arr, 0, n - 1);

	for(int i = 0; i < n; i++){
		cout<<arr[i]<<' ';
	}

	return 0;
}