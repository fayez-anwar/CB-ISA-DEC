#include <iostream>

using namespace std;

int main(void){
	int n;
	cin>>n;
	// string arr[n];
	// for (int i = 0; i < n; ++i){
	// 	cin>>arr[i];
	// }

	// string max_str;
	// //initially, string is empty, i.e. its length is 0

	// for (int i = 0; i < n; ++i){
	// 	string curr_str = arr[i];
	// 	if(curr_str.length() > max_str.length()){
	// 	//we are comparing the length of curr_str and max_str
	// 		max_str = curr_str;
	// 	}
	// }
	// cout<<max_str;

	string max_str, curr_str;
	for (int i = 0; i < n; ++i){
		cin>>curr_str;
		if(curr_str.length() > max_str.length()){
		//we are comparing the length of curr_str and max_str
			max_str = curr_str;
		}
	}

	cout<<max_str;

	return 0;
}