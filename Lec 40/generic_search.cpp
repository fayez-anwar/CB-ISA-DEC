#include <iostream>
using namespace std;

//we use generic programming
template < typename T1, typename T2>
int searchArr(double a[], int n, double key){

	for(int i = 0; i < n; i++){
		if(a[i] == key)
			return i;
	}
	return -1;
}

int main(void){
	int n;
	cin>>n;
	double arr[n];
	for(int i = 0; i < n; i++)
		cin>>arr[i];

	double key;
	cin>>key;

	cout<<searchArr<double, int>(arr, n, key);

	return 0;
}