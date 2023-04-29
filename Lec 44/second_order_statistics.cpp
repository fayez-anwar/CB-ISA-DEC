#include <iostream>
#include <set>

using namespace std;

int main(void){
	set<int> s;
	int n, x;
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>x;
		s.insert(x);
	}
	if(s.size() < 2){
		cout<<"NO";
	}
	else{
		auto it = s.begin();
		it++;
		// advance(it, 1);
		cout<<(*it);
	}
}