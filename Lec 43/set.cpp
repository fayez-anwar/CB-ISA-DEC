#include <iostream>
#include <set>

using namespace std;

int main(void){
	set<int> s;
	for (int i = 0; i < 10; ++i){
		int x;
		cin>>x;
		s.insert(x);//inserting an element in the set
	}

	// to check for an element
	// cout<<s.count(4)<<endl;

	// cout<<s.size()<<endl;

	for(auto i : s){
		cout<<i<<endl;
	}
	cout<<endl;

	s.erase(1);
	for(auto i : s){
		cout<<i<<endl;
	}

	auto it = s.find(3);
	if(it != s.end()){
		s.erase(it);
	}
	cout<<endl;

	for(auto i : s){
		cout<<i<<endl;
	}

}