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

	int top_row = 0, bottom_row = n - 1;
	int left_col = 0, right_col = m - 1;

	while(left_col <= right_col && top_row <= bottom_row){
		// top_row
		for (int i = left_col; i <= right_col; ++i){
			cout<<a[top_row][i]<<' ';
		}
		top_row++;

		// right_col
		for (int i = top_row; i <= bottom_row; ++i){
			cout<<a[i][right_col]<<' ';
		}
		right_col--;

		if(top_row > bottom_row) {
			break;
		}

		// bottom_row
		for (int i = right_col; i >= left_col; --i){
			cout<<a[bottom_row][i]<<' ';
		}
		bottom_row--;

		if(left_col > right_col){
			break;
		}

		// left_col
		for (int i = bottom_row; i >= top_row; --i){
			cout<<a[i][left_col]<<' ';
		}
		left_col++;
	}

	return 0;
}