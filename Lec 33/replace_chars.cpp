#include <iostream>
using namespace std;

void replaceChar(string &s, char x, char y, int i){
	if(i == s.length()){//base case
		return;
	}
	if(s[i] == x){//work
		s[i] = y;
	}
	replaceChar(s, x, y, i + 1);//recursive case
}

void replaceChar2(string &s, char x, char y, int i, string &output){
	if (i == s.length()){
		return;
	}

	if(s[i] == x){
		output.push_back(y);
	}
	else{
		output.push_back(s[i]);
	}

	replaceChar2(s, x, y, i+1, output);
}


int main(void){
	string s;
	cin>>s;
	char x, y;
	cin>>x>>y;
	// replaceChar(s, x, y, 0);

	string output;
	replaceChar2(s, x, y, 0, output);
	cout<<s<<endl;
	cout<<output<<endl;
	return 0;
}