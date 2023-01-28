#include <iostream>
#include <cstring>
using namespace std;

int main(void){
	
	// char str[] = "Welcome";
	// cout<<str<<endl;
	// str = "Satur";
	// cout<<str;

	// char a[100] = "Welcome";
	// string s = "Saturday";

	// cout<<a<<endl;
	// cout<<s<<endl;

	// a = "Coding";
	// s = "Sunday";

	// cout<<strlen(a)<<endl;
	// cout<<s.length()<<endl;

	// for (int i = 0; a[i] != '\0'; ++i){
	// 	cout<<a[i]<<' ';
	// }
	// cout<<endl;

	// for (int i = 0; i < s.length(); ++i){
	// 	cout<<s[i]<<' ';
	// }
	// cout<<endl;

	// string a, b;
	// cin>>a;
	// cin>>b;

	// cout<<a<<endl;
	// cout<<b<<endl;

	// // a = a + b;
	// a += b;
	// cout<<a<<endl;

	// char a[10];
	// cin>>a;
	// // cout<<a<<endl;//Banana

	// char c;
	// cin>>c;
	// // cout<<c<<endl;//y

	// //--> Bananay

	// int i = strlen(a);

	// a[i] = c;//replaced \0 with y

	// a[i+1] = '\0';

	// cout<<a<<endl;

	// string s;
	// cin>>s;

	// char c;
	// cin>>c;

	// // s += c;
	// s.push_back(c);//appends c to s

	// cout<<s<<endl;


	// //initializing strings..
	// char str[] = "wello world";

	// string s1("Hello World");
	// cout<<s1<<endl;

	// string s2(str);
	// cout<<s2<<endl;

	char a[10] = "Hello";
	char b[10] = "Hi";

	// strcpy(a, b);//copies b to a;

	strcat(a, b);//appends b to a

	cout<<a<<endl;
	cout<<b<<endl;

	string s1 = "hello";
	string s2 = "hi";
	s1 += s2; 

	cout<<s1<<endl;
	cout<<s2<<endl;



	return 0;
}