#include <iostream>

using namespace std;

int main(void){
	int n; cin>>n;
	int arr[n];
	for(int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	int l = 0, r = n - 1;
	while(l < r){
		while(l < r && arr[l] == 0){
			l++;
		}//it will stop when arr[l] == 1

		while(r > l && arr[r] == 1){
			r--;
		}//it will stop when arr[r] == 0

		if(l < r && arr[l] == 1 && arr[r] == 0){
			//we should swap the values..
			swap(arr[l], arr[r]);
			l++, r--;
		}
	}

	for(int i = 0; i < n; i++){
		cout<<arr[i]<<' ';
	}
	
	return 0;
}