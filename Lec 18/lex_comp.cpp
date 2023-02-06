#include <iostream>
using namespace std;

void lexico_compare(string a, string b){
	int n = a.length(), m = b.length();
	int i = 0;
	while(i < n && i < m){
		if(a[i] < b[i]){
			cout<<a<<" is smaller\n";
			return;
		}
		else if(a[i] > b[i]){
			cout<<b<<" is smaller\n";	
			return;
		}
		i++;
	}
	//one of them is prefix of the other
	if(n < m){
		cout<<a<<" is smaller\n";
		return;
	}
	else if(m < n){
		cout<<b<<" is smaller\n";	
		return;
	}
	cout<<"Both are same";
}

bool lexico_compare2(string a, string b){
	//returns 0 if s1 is smaller or equal, 
	//if s2 is smaller1

	int n = a.length(), m = b.length();
	int i = 0;
	while(i < n && i < m){
		if(a[i] < b[i]){
			return 0;//return false
		}
		else if(a[i] > b[i]){
			return true;//return 1
		}
		i++;
	}
	//one of them is prefix of the other
	if(m < n){
		return 1;//return true
	}
	return false;
}

int main(void){
	string s1, s2;
	cin>>s1>>s2;

	// lexico_compare(s1, s2);

	cout<<lexico_compare2(s1, s2)<<endl;

	if(s1 < s2){
		cout<<s1<<" is smaller";
	}
	else if(s2 < s1){
		cout<<s2<<" is smaller";	
	}
	else{
		cout<<"Same string";
	}

	return 0;
}