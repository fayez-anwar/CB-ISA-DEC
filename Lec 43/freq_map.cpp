#include<iostream>
#include <map>

using namespace std;

int main(void){
	map<char, int> freq;

	freq['a'] = 3;
	freq['m'] = 2;
	freq['f'] = 6;
	freq['b'] = 2;
	freq['i'] = 4;

	for(auto i : freq){
		cout<<i.first<<' '<<i.second<<endl;
	}
	cout<<endl;

	freq['a']++;
	// freq['i'] = freq['i'] + 1;

	auto it = freq.find('a');
	if(it != freq.end()){
		(it->second)++;
	}

	for(auto i : freq){
		cout<<i.first<<' '<<i.second<<endl;
	}
}