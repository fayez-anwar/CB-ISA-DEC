#include <iostream>
using namespace std;

int mergeStep(int arr[], int start, int end){
	int mid = (start + end)/2;

	int n1 = mid - start + 1, n2 = end - mid;
	int left[n1], right[n2];

	for(int i = 0; i < n1; i++){
		left[i] = arr[start + i];
	}

	for(int i = 0; i < n2; i++){
		right[i] = arr[mid+1+i];
	}

	int i = 0, j = 0, idx = start, count = 0;

	while(i < n1 and j < n2){
		if(left[i] <= right[j]){
			arr[idx++] = left[i++];
			count += j;
			//no of elements in right[] which are less than left[i]
		}
		else{
			arr[idx++] = right[j++];
		}
	}

	while(i < n1){
		arr[idx++] = left[i++];
		count += j;
	}

	while(j < n2){
		arr[idx++] = right[j++];
	}

	return count;
}

int invCount(int arr[], int start, int end){
	if(start >= end)
		return 0;

	int mid = (start + end)/2;
	int inversionSum = 0;
	inversionSum += invCount(arr, start, mid);//1
	inversionSum += invCount(arr, mid+1, end);//2
	inversionSum += mergeStep(arr, start, end);//3
	//first element from left and second from right
	return inversionSum;
}

int main(void){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	cout<<invCount(arr, 0, n - 1);
	return 0;
}