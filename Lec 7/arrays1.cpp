// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

	//declaration..
	// int arr[10];
	// char vinay[50];
	// float anmol[7219];
	// bool fayez[4];
	int n;
	cin>>n;
	
	int arr[n];

	
	// for(int i = 0; i <= n-1; i++){
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	// cin>>arr[0];
	// cin>>arr[1];
	// cin>>arr[2];
	// cin>>arr[3];
	// cin>>arr[4];
	// cin>>arr[5];
	// cin>>arr[6];
	// cin>>arr[7];
	// cin>>arr[8];
	// cin>>arr[9];


	for(int i = 0; i < n; i++){
		cout<<arr[i]<<' ';
	}
	cout<<endl;

	// arr[9] 
	// arr[8]
	// arr[7]
	// arr[6]
	// arr[5]
	// arr[4]
	// arr[3]
	// arr[2]
	// arr[1]
	// arr[0]
	for(int i = n-1; i >= 0; i--){
		cout<<arr[i]<<' ';
	}

	// cout<<arr[0]<<endl;
	// cout<<arr[1]<<endl;
	// cout<<arr[2]<<endl;
	// cout<<arr[3]<<endl;
	// cout<<arr[4]<<endl;
	// cout<<arr[5]<<endl;
	// cout<<arr[6]<<endl;
	// cout<<arr[7]<<endl;
	// cout<<arr[8]<<endl;
	// cout<<arr[9]<<endl;

	return 0;
}