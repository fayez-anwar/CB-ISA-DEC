#include <iostream>
using namespace std;

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void printCombinations(string &s, string &output, int i){
	//base case...
	if(i == s.length()){
		cout<<output<<endl;
		return;
	}

	int digit = s[i] - '0';
	for (int j = 0; j < table[digit].size(); ++j){
		char x = table[digit][j];
		
		output.push_back(x);//placing all possible x at i-th index

		printCombinations(s, output, i+1);//recursive case

		output.pop_back();//removing current character
	}
	return;
}

int main(void){
	string s, output;
	cin>>s;
	printCombinations(s, output, 0);
	return 0;
}