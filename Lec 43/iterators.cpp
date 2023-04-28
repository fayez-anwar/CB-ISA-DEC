#include <iostream>
#include <vector>
#include <cstring>
#include <map>
#include <set>
#include <iterator>

using namespace std;

int main(void){
	vector<int> v = {1, 2, 3, 4, 5};

	// for(vector<int>::iterator it = v.begin()+2; it+1 != v.end(); it++){
	// 	cout<<(*it)<<endl;
	// }

	map<int, int> m;
	m[1] = 5;
	m[3] = 13;
	m[-4] = 81;
	m[0] = 22;

	// for(map<int,int>::iterator it = m.begin(); it != m.end(); it++){
	// 	cout<<(*it).first<<' ';
	// 	cout<<it->second<<endl;
	// 	advance(it, 1);
	// }

	set<int> s;
	for (int i = 0; i < 10; ++i){
		int x;
		cin>>x;
		s.insert(x);
	}

	set<int>::iterator it = s.begin();
	advance(it, 2);

	auto it1 = next(it, 1);
	cout<<*it1<<endl;

	auto it2 = prev(it1, 2);
	cout<<*it2<<endl;

	// for(; it != s.end(); it++){
	// 	cout<<(*it)<<endl;
	// }





}