#include <iostream>
using namespace std;

int main(void){

	// Given an array consisting of only 0s and 1s.
	// Bring all 0s to the left of all the 1s.
	// sort the array.
	int n; 
	cin>>n;

	int arr[n];
	for(int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	//sorting
	// for (int i = 0; i < n - 1; ++i){
	// 	bool isSorted = true;
	// 	for(int j = 0; j < n - i - 1; j++){
	// 		if(arr[j] > arr[j+1]){
	// 			arr[j] = 0;
	// 			arr[j+1] = 1;
	// 			isSorted = false;
	// 		}
	// 	}
	// 	if(isSorted){
	// 		break;
	// 	}
	// }

	// for(int i = 0; i < n - 1; i++){
	// 	int min_index = i;
	// 	for(int j = i + 1; j < n; j++){
	// 		if(arr[j] < arr[min_index]){
	// 			min_index = j;
	// 		}
	// 	}
		
	// 	if(min_index != i){
	// 		//swap
	// 		int temp = arr[i];
	// 		arr[i] = arr[min_index];
	// 		arr[min_index] = temp;
	// 	}
	// }

	// for(int i = 1; i < n; i++){
	// 	int key = arr[i], j = i - 1;
	// 	while(j >= 0 && arr[j] > key){
	// 		arr[j+1] = arr[j];
	// 		j--;
 	// 	}
 	// 	arr[j+1] = key;
	// }

	// count number of zeros, and number of ones;
	// put 0 at first cnt0 indices, and 1 at rest??

	int z = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == 0){
			z++;
		}
	}

	for(int i = 0; i < n; i++){
		// if(i < z){
		// 	arr[i] = 0;
		// }
		// else{
		// 	arr[i] = 1;
		// }

		// (i < z) ? arr[i] = 0 : arr[i] = 1;

		arr[i] = (i < z) ? 0 : 1;
	}

	// for(int i = 0; i < z; i++){
	// 	arr[i] = 0;
	// }
	// for(int i = z; i < n; i++){
	// 	arr[i] = 1;
	// }


	
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<' ';
	}

	return 0;
}

