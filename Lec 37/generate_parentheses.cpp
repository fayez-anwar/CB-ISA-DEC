#include <iostream>
using namespace std;

void generate(int open, int close, int n, string s){
	//base case
	if(close == n){
		cout<<s<<endl;
		return;
	}

	//close parantheses 
	if(open > close){
		generate(open, close + 1, n, s + ')');
	}

	//open paranthese
	if(open < n){
		generate(open + 1, close, n, s + '(');
	}

}

int main(void){
	int n;
	cin>>n;
	generate(0, 0, n, "");
	return 0;
}