#include <iostream>
using namespace std;

int main(void){

	// Given an array, 
	// find two values which sum up to X

	int n;
	cin>>n;

	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	int x;
	cin>>x;

	for(int i = 0; i < n; i++){
		//picking arr[i] as first value of the pair..
		for(int j = i + 1; j < n; j++){
			//picking arr[j] as second value..
			if(arr[i] + arr[j] == x){
				cout<<arr[i]<<' '<<arr[j]<<endl;
			}
		}
	}

}