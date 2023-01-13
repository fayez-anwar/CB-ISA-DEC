#include <iostream>
using namespace std;

int main(void){
	double arr[] = {2,3,5,6};

	// cout<<sizeof(arr)/sizeof(double)<<endl;

	// cout<<arr[0]<<' ';
	// cout<<arr[1]<<' ';
	// cout<<arr[2]<<' ';
	// cout<<arr[3]<<' ';

	int arr2[15] = {1,-2,3};

	// cout<<endl;
	for(int i = 0; i < 15; i++){
		cout<<arr2[i]<<' ';
	}
	
	int arr3[10] = {2,3,4};

	for(int i = 0; i < 6; i++){
		cout<<arr3[i]<<' ';
	}

	//invalid index => may lead to Segmentation Fault
	// arr[1055] = 19;
	// cout<<arr[1055]<<endl;

	// // cout<<arr[4]<<endl;
	// // cout<<arr[5]<<endl;
	// // cout<<arr[6]<<endl;
	// // cout<<arr[7]<<endl;
	// // cout<<arr[8]<<endl;

	// int arr[5];

	// int arr[6] = {2,5,8,9,1,3};
}