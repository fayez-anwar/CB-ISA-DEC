#include <iostream>

using namespace std;

int main(void){
	//1
	int n, m;
	cin>>n>>m;
	int mat[n][m];

	//taking input 2
	for(int i = 0; i < n; i++){
		for (int j = 0; j < m; ++j)	{
			cin>>mat[i][j];
		}
	}

	int t;
	cin>>t;

	bool found = false;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){	
			if(mat[i][j] == t){
				found = true;
				// break;
			}
		}
	}

	cout<<found;

	return 0;
}