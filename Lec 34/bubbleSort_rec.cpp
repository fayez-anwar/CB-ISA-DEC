#include <iostream>
using namespace std;

void bubble_sort(int arr[], int idx){
	//base case
	if(idx == 0){
		return;
	}


	//work
	for (int i = 0; i < idx; ++i){
		if(arr[i] > arr[i+1]){
			swap(arr[i], arr[i+1]);
		}
	}

	//recursive call
	bubble_sort(arr, idx - 1);
}

int main(void){
	int n; 
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; ++i){
		cin>>arr[i];
	}
	
	bubble_sort(arr, n - 1);

	for(int i = 0; i < n; ++i){
		cout<<arr[i]<<' ';
	}

}