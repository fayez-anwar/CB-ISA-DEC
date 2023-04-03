#include <iostream>
using namespace std;

char maze[1001][1001];
bool output[1001][1001];

int n, m;

bool solve(int i, int j){
	output[i][j] = true;

	//base case
	if(i == n - 1 and j == m - 1){
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < m; ++j){
				cout<<output[i][j]<<' ';
			}
			cout<<endl;
		}		

		return true;
	}

	//go right
	if(j + 1 < m and maze[i][j+1] != 'X'){
		bool pathFoundRight = solve(i, j+1);
		if(pathFoundRight) return true;
	}

	//go down
	if(i + 1 < n and maze[i+1][j] != 'X'){
		bool pathFoundDown = solve(i+1, j);
		if(pathFoundDown) return true;
	}

	//no path found
	output[i][j] = false;
	return false;
}

int main(void){
	cin>>n>>m;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			cin>>maze[i][j];
		}
	}

	bool pathFound = solve(0, 0);

	if(!pathFound)	cout<<"-1";

	return 0;
}