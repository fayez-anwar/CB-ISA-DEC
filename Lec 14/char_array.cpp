#include <iostream>

using namespace std;

int main(void){
	//ways to initialize char []
	int n;
	cin>>n;

	char s[100];//declaration
	
	char a[10] = {'\0', 'H', 'e', '\0', 'l', 'o'};

	char b[7] = {'C', 'o', 'd', 'i', 'n', 'g', '\0'};


	char str[] = "Welcome";//7chars, but size is 8
	//str[0] = 'W, str[1] = 'e', str[2] = 'l',....
	char str1[100] = "Why1%";//3 chars, but size is 4

	// int a[10] = 1029384365;not valid

	// for (int i = 0; i < 7; ++i){
	// 	cout<<w[i];
	// }
	// cout<<endl;
	// cout<<str[2]<<endl;
	cout<<a<<endl;
	// cout<<str1<<endl;
	cout<<b<<endl;
	//the name of char array prints the entire array..

	// int arr[5];
	// cout<<arr<<endl;//prints address of arr[0]
	// cout<<&arr[0];

	// cout<<s<<endl;

	// cout<<sizeof(a)<<endl;
	// cout<<sizeof(b)<<endl;
	// cout<<sizeof(str)<<endl;
	// cout<<sizeof(str1)<<endl;
	// cout<<(int)b[6];//

	return 0;
}