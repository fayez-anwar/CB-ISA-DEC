#include <iostream>

using namespace std;

int main(void){
	int n; 
	cin>>n;
	
	int arr[n];
	for(int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	int x;
	cin>>x;

	//find triplet
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			for(int k = j + 1; k < n; k++){
				if(arr[i] + arr[j] + arr[k] == x){
					cout<<arr[i]<<' '<<arr[j]<<' '<<arr[k]<<endl;
				}
			}
		}
	}

	return 0;
}