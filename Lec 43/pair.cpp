#include<iostream>

using namespace std;

// template<typename T1, typename T2>
// class Pair{
// public:
// 	T1 first;
// 	T2 second;
// };

int main(void){
	pair<int, char> p;

	// cout<<p.first<<' '<<p.second<<endl;

	p.first = 17;
	p.second = 't';

	cout<<p.first<<' '<<p.second<<endl;

	p = {19, 'l'};

	cout<<p.first<<' '<<p.second<<endl;

	p = make_pair(4, 'r');

	cout<<p.first<<' '<<p.second<<endl;

	cout<<sizeof(p)<<endl;

	pair<char,int> arr[10];

}