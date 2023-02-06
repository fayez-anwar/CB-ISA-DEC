#include <iostream>

using namespace std;

int main(void){
	int n, m;
	cin>>n>>m;
	char a[n][m];
	int top_row = 0, bottom_row = n - 1;
	int left_col = 0, right_col = m - 1;

	char c = 'X';
	while(top_row <= bottom_row and left_col <= right_col){
		//making top and bottom of rectangle
		for (int i = left_col; i <= right_col; ++i){
			a[top_row][i] = c;
			a[bottom_row][i] = c;
		}
		top_row++;
		bottom_row--;

		//making left and right of rectangle
		for (int i = top_row; i <= bottom_row; ++i){
			a[i][left_col] = c;
			a[i][right_col] = c;
		}
		left_col++;
		right_col--;

		if(c == 'X') {
			c = 'O';
		}
		else{
			c = 'X';
		}
	}

	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}

	return 0;
}