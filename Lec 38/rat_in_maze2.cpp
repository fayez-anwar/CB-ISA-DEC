#include <iostream>
#include <vector>
using namespace std;

const int N = 1001;

bool solve(int i, int j, int n, int m, vector<vector<char>> &maze, vector<vector<bool>> &output){
	output[i][j] = true;//this particular cell be included in the path

	//base case
	if(i == n - 1 and j == m - 1){
		//destination cell
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
		bool pathFoundRight = solve(i, j+1, n, m, maze, output);
		if(pathFoundRight) return true;
	}

	//go down
	if(i + 1 < n and maze[i+1][j] != 'X'){
		bool pathFoundDown = solve(i+1, j, n, m, maze, output);
		if(pathFoundDown) return true;
	}

	//no path found
	output[i][j] = false;//do not include this cell in path
	//as it cannot lead you to the destination
	return false;
}

int main(void){
	int n, m;
	cin>>n>>m;
	vector<vector<char>> maze(n, vector<char> (m));
	vector<vector<bool>> output(n, vector<bool> (m));
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			cin>>maze[i][j];
		}
	}

	bool pathFound = solve(0, 0, n, m, maze, output);

	if(!pathFound)	cout<<"-1";

	return 0;
}