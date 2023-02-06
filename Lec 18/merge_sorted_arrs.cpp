#include <iostream>

using namespace std;

int main(void){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}
	int m;
	cin>>m;
	int b[m];
	for (int i = 0; i < m; ++i){
		cin>>b[i];
	}

	int merged[n+m];
	int i = 0, j = 0, x = 0;
	//i the index of smallest available element in a[]
	//j the index of smallest available element in b[]
	//x is the index of merge[], where the next element is
	//to be added
	while(i < n && j < m){
		if(a[i] < b[j]){
			merged[x++] = a[i++];//correct
			// i++;

			// merged[x] = a[++i];//incorrect??
		}
		else{
			merged[x++] = b[j++];
			// merged[++x] = b[j++];??
			// merged[x] = b[j++];
			// j++;
		}
		// x++;
	}
	//atleast one of the array has ended

	//if b[] is not over
	while(j < m){
		merged[x++] = b[j++];
	}

	//if a[] is not over
	while(i < n){
		merged[x++] = a[i++];
	}

	for(int i = 0; i < n+m; i++){
		cout<<merged[i]<<' ';
	}

	return 0;
}