#include <iostream>

using namespace std;


int main(void){

	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	int min_indx = 0, max_indx = 0;
	for (int i = 0; i < n; ++i){
		if(arr[i] < arr[min_indx]){
			min_indx = i;
		}
		if(arr[i] > arr[max_indx]){
			max_indx = i;
		}
	}

	cout<<"Max value: "<<arr[max_indx]<<" at index "<<max_indx<<endl;
	cout<<"Min value: "<<arr[min_indx]<<" at index "<<min_indx<<endl;

	return 0;
}