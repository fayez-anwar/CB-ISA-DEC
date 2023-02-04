#include <iostream>
using namespace std;

int main(void){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	//method1
	// for (int i = 0; i < n; ++i){
	// 	for (int j = i; j < n; ++j){
	// 		//i is the starting index of subarray
	// 		//j is the ending index of subarray
	// 		// cout<<i<<','<<j<<" : ";
	// 		for (int k = i; k <= j; ++k){
	// 			cout<<arr[k]<<" ";
	// 		}
	// 		cout<<endl;
	// 	}
	// }

	//method2
	for (int len = 1; len <= n; len++){
		for(int i = 0; i <= n - len; i++){
			//print len elements starting from i
			// for (int k = 0; k < len; ++k){
			// 	cout<<arr[i+k]<<' ';
			// }
			for(int k = i; k < i + len; k++){
				cout<<arr[k]<<' ';	
			}
			cout<<endl;
		}
		
	}

	return 0;
}