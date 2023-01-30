#include <iostream>
#include <climits>
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

	int max_sum_row = INT_MIN;
	for (int i = 0; i < n; ++i){
		//calculate the sum of row i, and compare it
		int rowsum = 0;
		for (int j = 0; j < m; ++j){
			rowsum += a[i][j];
		}
		if(rowsum > max_sum_row){
			max_sum_row = rowsum;
		}
		// max_sum_row = max(max_sum_row, rowsum);
	}

	int max_sum_col = INT_MIN;
	for (int j = 0; j < m; ++j){
		//calc the sum of col j, and compare it
		int colsum = 0;
		for (int i = 0; i < n; ++i){
			colsum += a[i][j];
		}
		max_sum_col = max(max_sum_col, colsum);
	}

	cout<<max_sum_row<<endl;
	cout<<max_sum_col<<endl;

	return 0;
}