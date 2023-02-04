#include <iostream>
using namespace std;

int main(void){
	int n; 
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; ++i){
		cin>>arr[i];
	}
	
	int target;
	cin>>target;

	int left = 0, right = n - 1;
	bool isFound = false;
	while(left <= right){
		int mid = (left + right)/2;

		if(arr[mid] == target){
			isFound = true;
			break;
		}
		else if(arr[mid] > target){
			//go left
			right = mid - 1;
		}
		else{ //if(arr[mid] < target) 
			//go right
			left = mid + 1;
		}
	}
	if(isFound){
		cout<<"Found";
	}
	else{
		cout<<"Not Found";
	}
	return 0;
}