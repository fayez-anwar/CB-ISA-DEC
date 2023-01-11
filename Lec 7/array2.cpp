// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	//input N
	int n;
	cin>>n;

	int arr[n];//decalaration of array
	//array input
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	int minValue = arr[0], maxValue = arr[0];
	int sum = 0;

	for(int i = 0; i < n; i++){
		if(arr[i] > maxValue){
			maxValue = arr[i];
		}
		if(arr[i] < minValue){
			minValue = arr[i];
		}
		sum = sum + arr[i];
	}

	cout<<"Minimum: "<<minValue<<endl;
	cout<<"Maximum: "<<maxValue<<endl;
	cout<<"Average: "<<(sum/n)<<endl;

	return 0;
}