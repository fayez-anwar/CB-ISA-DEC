#include <iostream>

using namespace std;

int main(void){
	
	// int arr[5];

	// // cout<<arr<<endl;
	// // cout<<(arr+1)<<endl;
	// // cout<<&arr[1]<<endl;

	// // cout<<&arr<<endl;
	// // cout<<arr<<endl;

	
	// for (int i = 0; i <= 5; ++i)
	// {
	// 	cout<<i<<' '<<&arr[i]<<endl;
	// }
	// cout<<endl<<&arr<<endl;
	// cout<<(&arr) + 1<<endl;

	// cout<<sizeof(arr)<<endl;

	// int mat[20][30];

	// // cout<<sizeof(mat)<<endl;
	// // cout<<sizeof(mat[0]);
	// cout<<mat<<endl;
	// cout<<mat[0]<<endl;
	// cout<<&mat[0][0]<<endl;

	// cout<<mat[12][18]<<endl;

	// cout<<*(*(mat + 12) + 18);

	// int *p[5];//array of pointers

	// cout<<sizeof(p[0])<<endl;

	// int x;
	// p[1] = &x;

	int (*p)[4];

	// cout<<sizeof(p)<<endl;
	
	// int x;
	// p = &x;

	float b[4];
	p = &b;



	return 0;
}