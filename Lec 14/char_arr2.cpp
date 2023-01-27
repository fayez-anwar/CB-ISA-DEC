#include <iostream>

using namespace std;

int main(void){
	// int n;
	// cin>>n;
	char c[1000];
	// for (int i = 0; i < n; ++i){
	// 	cin>>c[i];
	// }

	// cin>>c;
	//takes as input chars until whitespace
	// cin.get();//gets on character at a time..
	
	// cin.getline(c, n);
	//takes char input until \n

	cin.getline(c, 1000);


	cout<<c<<endl;

	// cout<<(int)c[6]<<endl;

	// char str[] = "An nbb nm o";
	// cout<<str<<endl;

	return 0;
}