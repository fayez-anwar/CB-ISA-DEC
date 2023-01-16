#include <iostream>
using namespace std;

int main(void){
	int n;
	cin>>n;

	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	//insertion sort
	for(int i = 1; i < n; i++){
		int key = arr[i], j = i - 1;
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}

	// for(init ; condition; updation)

	for(int i = 1; i < n; i++){
		int key = arr[i], j = i - 1;
		for( ; j >= 0 && arr[j] > key; j--){
			arr[j+1] = arr[j];
		}
		arr[j+1] = key;
	}

	for(int i = 0; i < n; i++){
		cout<<arr[i]<<' ';
	}


	// bool flag = false;

	// while(flag){
	// 	cout<<"Inside Body of While";
	// }

	// do{
	// 	cout<<"Inside Body of do-While";
	// }while(flag);

	// int i = 10;
	// while(i < 10){
	// 	cout<<i<<' ';
	// 	i++;
	// }
	// cout<<endl;

	// i = 10;
	// do{
	// 	cout<<i<<' ';	
	// 	i++;
	// }while(i < 10);

	return 0;
}