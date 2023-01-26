#include <iostream>
#include <climits>
using namespace std;

int sumOfArray(int arr[], int n){
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	return sum;
}

int minArray(int arr[], int n){
	int min_value = INT_MAX;
	for (int i = 0; i < n; ++i){
		min_value = min(min_value, arr[i]);
	}
	return min_value;
}

int maxArray(int arr[], int n){
	int max_value = INT_MIN;
	for (int i = 0; i < n; ++i){
		max_value = max(max_value, arr[i]);
	}
	return max_value;
}

void func(int arr[], int n){
	int min_value = INT_MAX, max_value = INT_MIN, sum = 0;
	for (int i = 0; i < n; ++i){
		min_value = min(min_value, arr[i]);//if(arr[i] < min_value) min_value = arr[i];
		// max_value = max(max_value, arr[i]);
		if(max_value < arr[i]){
			max_value = arr[i];
		}
		sum += arr[i];
	}
	cout<<min_value<<endl;
	cout<<max_value<<endl;
	cout<<(float)sum/n<<endl;
}

int main(void){
	
	int n; 
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	// int sum = sumOfArray(arr, n);

	// cout<<sum<<endl;

	// cout<<minArray(arr, n)<<endl;

	// cout<<maxArray(arr, n)<<endl;
	
	// float mean = sumOfArray(arr, n)/(float)n;

	// cout<<mean;

	func(arr, n);

	return 0;
}