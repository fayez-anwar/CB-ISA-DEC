#include <iostream>
using namespace std;

int n, count;
bool board[16][16];
bool colTaken[16];


bool check(int r, int c){
	//column check
	if(colTaken[c])
		return false;

	// for (int i = 0; i < n; ++i){
	// 	if(board[i][c])
	// 		return false;
	// }


	//diag 1
	int a = r, b = c;
	while(a >= 0 and b >= 0){
		if(board[a][b])
			return false;
		a--, b--;
	}

	//diag 2
	a = r, b = c;
	while(a >= 0 and b < n){
		if(board[a][b])
			return false;
		a--, b++;
	}

	return true;
}

void placeInRow(int row){
	//base case
	if(row == n){
		count++;
		return;
	}

	for (int col = 0; col < n; ++col){
		if(check(row, col)){
			board[row][col] = true;//placing queen at this cell
			
			colTaken[col] = true;

			placeInRow(row + 1);

			board[row][col] = false;

			colTaken[col] = false;
			//removing queen and backtracking to get other sols
		}
	}

}

int main(void){
	cin>>n;
	// count = 0;
	placeInRow(0);
	cout<<count;
}