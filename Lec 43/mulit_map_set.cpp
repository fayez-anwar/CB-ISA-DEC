#include <iostream>
// #include <map>
#include <set>

using namespace std;

int main(void){
	multimap<int, int> m;

	m.insert({1, -1});
	m.insert({1, 5});
	m.insert({3, 4});
	m.insert({3, 8});
	m.insert({2, 29});

	for(auto i : m){
		cout<<i.first<<' '<<i.second<<endl;
	}
	cout<<endl;

	// auto it = m.find(1);
	// if(it != m.end()){
	// 	cout<<it->first<<' '<<it->second<<endl;
	// }

	// m.erase(1);

	auto it = m.find(1);
	advance(it, 1);
	if(it != m.end()){
		m.erase(it);
	}

	for(auto i : m){
		cout<<i.first<<' '<<i.second<<endl;
	}
	cout<<endl;

	multiset<int> s;
	for (int i = 0; i < 10; ++i){
		int x;
		cin>>x;
		s.insert(x);
	}

	for(auto i : s){
		cout<<i<<endl;
	}
	cout<<endl;

	s.erase(1);//deletes all 1
	for(auto i : s){
		cout<<i<<endl;
	}

	auto it = s.find(3);//deletes only one occurence of 3
	if(it != s.end()){
		s.erase(it);
	}
	cout<<endl;

	for(auto i : s){
		cout<<i<<endl;
	}
}