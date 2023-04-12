#include <iostream>
using namespace std;

// void bubbleSort(int a[], int n){
// 	for(int i = 0; i < n - 1; i++){
// 		for(int j = 0; j < n - 1 - i; j++){
// 			if(a[j] > a[j+1])
// 				swap(a[j], a[j+1]);
// 		}
// 	}
// }

// void bubbleSort(double a[], int n){//function overloading
// 	for(int i = 0; i < n - 1; i++){
// 		for(int j = 0; j < n - 1 - i; j++){
// 			if(a[j] > a[j+1])
// 				swap(a[j], a[j+1]);
// 		}
// 	}
// }

template<typename T>
void bubbleSort(T a[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - 1 - i; j++){
			if(a[j] > a[j+1])
				swap(a[j], a[j+1]);
		}
	}
}




int main(void){
	int n;
	cin>>n;

	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	bubbleSort<int>(arr, n);

	for(int i = 0; i < n; i++){
		cout<<arr[i]<<' ';
	}
	cout<<endl;


	int m;
	cin>>m;

	double arr2[m];
	for(int i = 0; i < m; i++){
		cin>>arr2[i];
	}

	bubbleSort<double>(arr2, m);

	for(int i = 0; i < m; i++){
		cout<<arr2[i]<<' ';
	}
	cout<<endl;

	return 0;
}