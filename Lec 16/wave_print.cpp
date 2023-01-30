#include <iostream>
using namespace std;

int main(void){
	int n, m;
	cin>>n>>m;
	int a[n][m];
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			cin>>a[i][j];
		}
	}

	for (int j = 0; j < m; ++j){//traversing col-wise
		if(j%2 == 1){//col is odd
			//go bottom-to-up
			for (int i = n-1; i >= 0; --i){
				cout<<a[i][j]<<' ';
			}
		}
		else{//col is even
			//go top-to-bottom
			for (int i = 0; i < n; ++i){
				cout<<a[i][j]<<' ';
			}

		}
	}


	return 0;
}