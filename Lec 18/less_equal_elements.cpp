#include <iostream>
using namespace std;

int less_equalX(int a[], int n, int x){
	// int countOfX = 0;
	// for (int i = 0; i < n; ++i){
	// 	if(a[i] <= x){
	// 		countOfX++;
	// 	}
	// }
	// return countOfX;

	//try to find the last index of x

	int l = 0, r = n - 1;
	while(l <= r){
		// int mid = (l+r)/2;
		int mid = l + (r-l)/2;

		if(a[mid] <= x){
			//the needed index/value is on the right
			l = mid + 1;
		}
		else{
			//neede index is possibly on the left
			r = mid - 1;
		}
	}
	return l;// return r+1;
}

int main(void){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	int x;
	cin>>x;

	cout<<less_equalX(arr, n, x);

	return 0;
}