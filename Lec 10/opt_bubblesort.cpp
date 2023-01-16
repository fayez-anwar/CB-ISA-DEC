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


	//bubble sort
	for(int i = 0; i < n-1; i++){
		cout<<i<<'\n';
		//iterating n-1 times over the entire array
		// int swaps = 0;
		bool flag = true;
		//going over the array left to right
		for(int j = 0; j < n - i - 1; j++){
			if(arr[j] > arr[j+1]){
				//swap..
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;

				// swaps++;
				flag = false;
			}
		}
		if(flag == true){
			//already sorted
			break;
		}
	}

	cout<<"Sorted Array: ";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<' ';
	}
	cout<<endl;

	return 0;
}