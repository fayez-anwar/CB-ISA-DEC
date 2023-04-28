#include <iostream>
#include <cstring>

using namespace std;

int main(void){
	
	string s;

	// cout<<s.size();
	// cout<<s.length();
	
	s.push_back('a');
	s = s + 'b';
	s += 'c';

	s = "aababbababbab";

	// cout<<s<<endl;

	// cout<<s[1]<<endl;

	string t = "xyz";

	string st = s + t;
	// cout<<st<<endl;//abcxyz

	// cout<<s.max_size()<<endl;
	// cout<<s.capacity()<<endl;

	// string sub1 = st.substr(1);
	// cout<<sub1<<endl;

	// string sub2 = st.substr(2, 7);
	// cout<<sub2<<endl;

	size_t idx = s.find("abb");
	if(idx != string::npos)
		cout<<idx<<endl;

	idx = s.find("abb", idx+1);
	
	if(idx != string::npos)
		cout<<idx<<endl;

	return 0;
}