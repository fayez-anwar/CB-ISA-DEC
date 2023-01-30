#include <iostream>

using namespace std;

int main(void){
	int n; 
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; ++i){
		cin>>arr[i];
	}
	
	for (int i = 0; i < n; ++i){
		for (int j = i; j < n; ++j){
			// cout<<i<<' '<<j<<" : ";
			//print elements from index i to j
			for (int k = i; k <= j; ++k){
				cout<<arr[k]<<' ';
			}
			cout<<endl;
		}
	}

	return 0;
}