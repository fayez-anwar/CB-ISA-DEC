#include <iostream>

using namespace std;

int main(void){
	
	int n; 
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	// cout<<arr<<endl;
	// cout<<&arr[0]<<endl;

	// cout<<*arr<<endl;

	// cout<<*(&arr[0])<<endl;//* and & cancel each other

	// cout<<&arr<<endl;


	
	// cout<<*&arr[0]<<endl;
	// cout<<&arr[0]<<endl;

	// cout<<*arr<<endl;
	// cout<<arr[0]<<endl;
	
	// cout<<&arr[1]<<endl;
	// cout<<&arr[2]<<endl;
	// cout<<&arr[3]<<endl;
	// cout<<&arr[4]<<endl;

	// cout<<*&arr[1]<<endl;
	// cout<<*&arr[2]<<endl;
	// cout<<*&arr[3]<<endl;
	// cout<<*&arr[4]<<endl;

	cout<<arr<<endl;//address of zeroth element
	cout<<(arr + 1)<<endl;//address of first element
	cout<<(arr + 2)<<endl;//address of second element
	cout<<(arr + 3)<<endl;//address of third element
	cout<<(arr + 4)<<endl;//address of fourth element

	cout<<*arr<<endl;//address of zeroth element
	cout<<*(arr + 1)<<endl;//address of first element
	cout<<*(arr + 2)<<endl;//address of second element
	cout<<*(arr + 3)<<endl;//address of third element
	cout<<*(arr + 4)<<endl;//address of fourth element

	// Q. if i give you address of 3rd index of array, 
	// can you tell me the first element??

	return 0;
}