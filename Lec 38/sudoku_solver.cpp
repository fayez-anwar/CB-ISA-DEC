#include <iostream>
using namespace std;

int n, board[9][9];

bool check(int i, int j, int digit){
	//row
	for(int col = 0; col < 9; col++){
		if(board[i][col] == digit)
			return false;
	}

	//col
	for(int row = 0; row < 9; row++){
		if(board[row][j] == digit)
			return false;
	}

	//subgrid
	int subStartRow = i - (i%3), subStartCol = j - (j%3);
	for (int a = 0; a < 3; ++a){
		for (int b = 0; b < 3; ++b){
			if(board[subStartRow + a][subStartCol + b] == digit)
				return false;
		}
	}

	return true;
}

bool placeDigit(int i, int j){
	//base case
	if(i == n-1 and j == n)//board completed
		return true;
	
	if(j == n)//row completed
		return placeDigit(i + 1, 0);

	if(board[i][j] != 0)//pre-filled cell, go to next one
		return placeDigit(i, j + 1);

	for(int d = 1; d <= 9; d++){
		if(check(i, j, d)){//can place dgt at (i, j)
			board[i][j] = d;
			if(placeDigit(i, j + 1))
				return true;
			board[i][j] = 0;//backtracking..
		}
	}
	return false;//not possible for any value at (i, j)
}


int main(void){
	cin>>n;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			cin>>board[i][j];
		}
	}

	bool solExist = placeDigit(0, 0);

	// if(!solExist) return 0;

	for (int i = 0; i < n; ++i){
		for(int j = 0; j < n; j++){
			cout<<board[i][j]<<' ';
		}
		cout<<endl;
	}

	return 0;
}