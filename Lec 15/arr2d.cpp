#include <iostream>

using namespace std;

int main(void){
	
	// int a1[n][m];
	//4 x (int arr[4])
	//there are 4 arrays of type int
	// int a2[2][3] = {{1,2,3}, {4,5,6}};


	int a[][4] = {{2,1,3,4}, {7,9,0,1}, {8,3,5,1}};

	// 		0	1	2	3

	// 0	2	1	3 	4
	// 1	7	9	0	1
	// 2	8   3	5	1


	// int b[10][] = {{1,2}, {2,3}};

	// char a4[][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}};

	// char c5[][4] = {"abcd", "efgh", "ijkl", "mnop"};


	// cout<<a[1][1];

	//iterating a 2d array..

	// cout<<a[0][0]<<endl;
	// cout<<a[0][1]<<endl;
	// cout<<a[0][2]<<endl;
	// cout<<a[0][3]<<endl;
	// cout<<endl;
	// cout<<a[1][0]<<endl;
	// cout<<a[1][1]<<endl;
	// cout<<a[1][2]<<endl;
	// cout<<a[1][3]<<endl;
	// cout<<endl;
	// cout<<a[2][0]<<endl;
	// cout<<a[2][1]<<endl;
	// cout<<a[2][2]<<endl;
	// cout<<a[2][3]<<endl;

	// for (int i = 0; i < 3; ++i){
	// 	cout<<a[i][0]<<endl;
	// 	cout<<a[i][1]<<endl;
	// 	cout<<a[i][2]<<endl;
	// 	cout<<a[i][3]<<endl;
	// 	cout<<endl;
	// }

	for (int i = 0; i < 3; ++i){
		for (int j = 0; j < 4; ++j){
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}


	return 0;
}