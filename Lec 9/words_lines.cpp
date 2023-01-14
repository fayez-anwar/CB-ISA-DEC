#include <bits/stdc++.h>

using namespace std;

int main(void){

	int characters = 0;
	int words = 0, lines = 0;

	char c;

	cin.get(c);
	//cin>>c;
	//not using as it ignores whitespaces

	while(c != '$'){
		characters++;
		if(c == ' ' || c == '\n'){
			//if there is a space or a new-line char
			//it means a word is completed
			words++;
		}		
		if(c == '\n'){
			lines++;
		}
		cin.get(c);
	}

	if(characters > 0){
		words++;//to count the last word
		//which ends with $
		lines++;//to consider the last line
	}

	cout<<"Characters: "<<characters<<endl;
	cout<<"Words: "<<words<<endl;
	cout<<"Lines: "<<lines<<endl;

	// cout<<(int)('\n');

	return 0;
}