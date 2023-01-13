#include <iostream>
using namespace std;

int main(void){

	// Given an array of integers, 
	// find the values which are unique,
	// i.e. occurs only once in the array.

	int n;
	cin>>n;

	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	// for(int i = 0; i < n; i++){
	// 	//checking whether arr[i] is unique or not
	// 	bool isUnique = true;
	// 	//checking entire array whether same value
	// 	//as arr[i] exists at a different index
	// 	for(int j = 0; j < n; j++){
	// 		if(i != j && arr[i] == arr[j]){
	// 			isUnique = false;
	// 		}
	// 	}
	// 	if(isUnique){
	// 		cout<<arr[i]<<' ';
	// 	}
	// }

	//frequency == no. of occurence of something

	for(int i = 0; i < n; i++){
		//checking whether arr[i] is unique or not
		
		int freq = 0;
		//getting the frequency of arr[i]
		for(int j = 0; j < n; j++){
			if(arr[i] == arr[j]){
				freq++;
			}
		}
		if(freq == 1){
			cout<<arr[i]<<' ';
		}
	}

	return 0;
}