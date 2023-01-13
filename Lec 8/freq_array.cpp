#include <iostream>
using namespace std;

int main(void){

	// Q. Calculate the frequency of each value in the 
	// array.
	int n;
	cin>>n;

	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	for(int i = 0; i < n; i++){
		//checking whether arr[i] is unique or not
		
		int freq = 0;
		//getting the frequency of arr[i]
		for(int j = 0; j < n; j++){
			if(arr[i] == arr[j]){
				freq++;
			}
		}
		cout<<"Frequency of "<<arr[i]<<" is "<<freq<<endl;
	}

	return 0;
}
