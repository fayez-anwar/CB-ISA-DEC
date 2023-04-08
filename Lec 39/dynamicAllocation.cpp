#include <iostream>
using namespace std;

int main(void){
	//staic
	int x;
	x = 10;
	cout<<x<<endl;

	//dynamic
	int *ptr = new int;
	//ptr is a pointer pointining to a chunk of 4bytes
	//which is dynamicallly allocated
	*ptr = 10;

	cout<<*ptr<<endl;

	//static array
	int arr[x];

	//dynamic array
	int n;
	cin>>n;
	int *a = new int[n];

	for(int i = 0; i < n; i++){
		a[i] = i;
	}

	for(int i = 0; i < n; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;

	//i want to double the size of a
	//and copy the elements after it.

	int *temp;
	temp = new int[2*n];
	for(int i = 0; i < n; i++){
		temp[i] = a[i];
	}
	for(int i = 0; i < n; i++){
		temp[i+n] = a[i];
	}

	//now i don't need the chunk which is referred by a
	delete[] a;//deallocating the memory dynamically allocated
	//de-allocation is only done for memory allocated by new
	//de-allocation is to be done once and only once

	a = temp;

	for(int i = 0; i < 2*n; i++){
		cout<<a[i]<<' ';
	}

	delete[] a;

	return 0;
}