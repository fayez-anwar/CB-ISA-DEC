#include <iostream>
using namespace std;

int main(void){
	int count = 0;

	char c;

	// cin>>c;//cin ignores whitespace, ' ' '\n'
	cin.get(c);
	
	while(c != '$'){
		count = count + 1;
		// cin>>c;
		cin.get(c);
	}

	// for (cin.get(c); c != '$'; cin.get(c))
	// {
	// 	count++;
	// }



	cout<<count;

	return 0;
}