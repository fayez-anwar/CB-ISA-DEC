#include <iostream>
using namespace std;

void perform_op(int a[], int ops[][3], int j){
	//i have to increase values of op j in a[], 
	//by d of op j
	int l = ops[j][0];
	int r = ops[j][1];
	int d = ops[j][2];
	for (int i = l; i <= r; ++i){
		a[i] += d;
	}
}

void perform_op1(int a[], int ops[][3], int j, int f){
	//i have to increase values of op j in a[], 
	//by d of op j
	int l = ops[j][0];
	int r = ops[j][1];
	int d = ops[j][2]*f;
	for (int i = l; i <= r; ++i){
		a[i] += d;
	}
}

int main(void){
	
	//storage..
	int n, m, k;
	cin>>n>>m>>k;

	int a[n+1];
	for (int i = 1; i <= n; ++i){
		cin>>a[i];
	}

	int ops[m+1][3];
	for (int i = 1; i <= m; ++i){
		cin>>ops[i][0]>>ops[i][1]>>ops[i][2];
	}

	//queries
	int x, y;

	int freq[m+2] = {0};

	for(int i = 0; i < k; i++){
		cin>>x>>y;

		// for (int j = x; j <= y; ++j){
		// 	// perform_op(a, ops, j);
		// 	freq[j]++;
		// }
		freq[x]++;
		freq[y+1]--;
	}

	//prefix sum, cummulative sum
	for (int i = 2; i < m+2; ++i){
		freq[i] += freq[i-1];
	}

	// for (int i = 1; i <= m; ++i){
	// 	// perform_op1(a, ops, i, freq[i]);
	// }

	int incr[n+2] = {0};
	for (int i = 1; i <= m ; ++i){
		int l = ops[i][0], r = ops[i][1], d = ops[i][2] * freq[i];
		incr[l] += d;
		incr[r+1] -= d;
	}

	for (int i = 1; i < n+2; ++i){
		incr[i] += incr[i-1];
	}

	//output
	for(int i = 1; i <= n; i++){
		cout<<(a[i]+incr[i])<<' ';
	}

	return 0;
}