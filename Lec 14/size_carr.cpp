#include <iostream>

using namespace std;

int main(void){
	char str[100];
	cin>>str;
	cout<<str<<endl;

	// cout<<sizeof(str);

	//how to calculate the size of the string??

	int i = 0;
	while(str[i] != '\0'){
		i++;
	}
	cout<<i;

	for ( i = 0; str[i] != '\0'; ++i){}

	cout<<i;

	return 0;
}