#include <iostream>
using namespace std;

void replacePI(string s, int i, string &output){
	//base case
	if(i == s.length()){
		return;
	}

	//work
	if(i + 1 < s.length() and s[i] == 'p' and s[i+1] == 'i'){
		output += "3.14";
		replacePI(s, i + 2, output);//recursive call
	}
	else{
		output.push_back(s[i]);
		replacePI(s, i+1, output);//recursive call
	}
}

int main(void){
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i){
		string s, output;
		cin>>s;
		replacePI(s, 0, output);
		cout<<output<<endl;
	}	
	return 0;
}