#include <iostream>
#include <map>

using namespace std;

int main(void){
	map<string, int> m;
	int n;
	cin>>n;
	string s;
	for (int i = 0; i < n; ++i){
		cin>>s;

		if(!m.count(s)){
			// m.insert({s, 1});
			// m[s] = 1;
			// m[s]++;
			cout<<"OK\n";
		}
		else{
			cout<<(s + to_string(m[s]))<<endl;
			// m[s]++;
		}
		m[s]++;
	}
}