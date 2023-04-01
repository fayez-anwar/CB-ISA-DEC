#include <iostream>
using namespace std;

int main(void){
	int n, lower, upper;
	cin>>n>>lower>>upper;
	int arr[n];
	for (int i = 0; i < n; ++i)
		cin>>arr[i];

	if(arr[0] > lower)
		cout<<lower<<' '<<(arr[0] - 1)<<endl;

	for (int i = 1; i < n; ++i){
		if(arr[i] - arr[i-1] > 1)
			cout<<(arr[i-1] + 1)<<' '<<(arr[i] - 1)<<endl;
	}

	if(arr[n-1] < upper)
		cout<<(arr[n-1] + 1)<<' '<<upper<<endl;
}