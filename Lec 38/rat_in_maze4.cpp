#include <iostream>
using namespace std;

char maze[1001][1001];
bool output[1001][1001];
int visited[1001][1001];

int n, m;

void solve(int i, int j){
	//explored cell
	// if(visited[i][j] == 0)//no path to destination
	// 	return false;
	// if(visited[i][j] == 1)//path to destination
	// 	return true;

	//unexplored cell
	output[i][j] = true;//this particular cell be included in the path

	// visited[i][j] = 1;//assuming path exists

	//base case
	if(i == n - 1 and j == m - 1){
		//destination cell
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < m; ++j){
				cout<<output[i][j]<<' ';
			}
			cout<<endl;
		}	
		cout<<endl;	
		// return false;
		// return true;
		return;
	}

	//go right
	if(j + 1 < m and maze[i][j+1] != 'X'){
		solve(i, j+1);
		// if(pathFoundRight) return true;
	}

	//go down
	if(i + 1 < n and maze[i+1][j] != 'X'){
		solve(i+1, j);
		// if(pathFoundDown) return true;
	}

	//no path found
	output[i][j] = false;//do not include this cell in path
	//as it cannot lead you to the destination
	// visited[i][j] = 0;

	// return false;
}

int main(void){
	cin>>n>>m;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			cin>>maze[i][j];
			if(maze[i][j] == 'X')
				visited[i][j] = 0;
			else
				visited[i][j] = -1;
		}
	}

	solve(0, 0);
	// if(!pathFound)	cout<<"-1";

	return 0;
}