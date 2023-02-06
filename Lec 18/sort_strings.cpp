#include <iostream>
using namespace std;

bool lexico_compare2(string a, string b){
	//returns 0 if s1 is smaller or equal, 
	//if s2 is smaller1

	int n = a.length(), m = b.length();
	int i = 0;
	while(i < n && i < m){
		if(a[i] < b[i]){
			return 0;//return false
		}
		else if(a[i] > b[i]){
			return true;//return 1
		}
		i++;
	}
	//one of them is prefix of the other
	if(m < n){
		return 1;//return true
	}
	return false;
}

int main(void){
	int n;
	cin>>n;
	string arr[n];
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}

	for (int i = 0; i < n - 1; ++i){
		for (int j = 0; j < n - 1 - i ; ++j){
			//if element j is greater than element at j+1, 
			//swap them/
			// if(lexico_compare2(arr[j], arr[j+1])){
			// 	string temp = arr[j];
			// 	arr[j] = arr[j+1];
			// 	arr[j+1] = temp;
			// }
			if(arr[j+1] < arr[j]){
				string temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < n; ++i){
		cout<<arr[i]<<endl;
	}

	return 0;
}