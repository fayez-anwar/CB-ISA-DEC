#include <iostream>
using namespace std;

int	sumArr(int arr[], int i){
	if(i < 0){
		return 0;
	}
	return arr[i] + sumArr(arr, i - 1);
}


int main(void){
	
	int n;
	cin>>n;

	int arr[n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	cout<<sumArr(arr, n - 1);

	return 0;
}