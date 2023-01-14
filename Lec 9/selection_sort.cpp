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


	//selection sort
	for(int i = 0; i < n - 1; i++){
		int min_indx = i;
		//finding the index of ith minimum element
		for(int j = i; j < n; j++){
			if(arr[j] < arr[min_indx]){
				min_indx = j;
			}
		}

		if(i != min_indx){//ith value itself is not min
			//swap
			int temp = arr[i];
			arr[i] = arr[min_indx];
			arr[min_indx] = temp;
		}

	}

	cout<<"Sorted Array: ";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<' ';
	}
	cout<<endl;

	return 0;
}