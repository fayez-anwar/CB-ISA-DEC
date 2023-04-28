#include <iostream>
#include <unordered_map>

using namespace std;

int main(void){
	unordered_map<int, string> m;

	m[1] = "Aman";
	m[-1] = "Ankit";
	m[15] = "Anmol";
	m[2] = "Anand";

	for(auto i : m){
		cout<<i.first<<' '<<i.second<<endl;
	}
	cout<<endl;
	m.insert({4, "Himanshu"});
	m[3] = "Piyush";

	for(auto i : m){
		cout<<i.first<<' '<<i.second<<endl;
	}
	cout<<endl;

	m.erase(-1);

	auto it = m.find(15);
	if(it != m.end()){
		m.erase(it);
	}

	for(auto i : m){
		cout<<i.first<<' '<<i.second<<endl;
	}
	cout<<endl;

}