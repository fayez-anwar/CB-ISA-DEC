#include <iostream>
using namespace std;

int max_len;

void maxSameSub(string &s, int k, char x){
	int count = 0, j = 0, n = s.length();
	for (int i = 0; i < n; ++i){
		if(s[i] != x){
			count++;
		}
		while(count > k){
			if(s[j] != x){
				count--;
			}
			j++;
		}
		max_len = max(max_len, i - j + 1);
	}
	// return max_len;
}

int main(void){
	int k;
	cin>>k;
	string s;
	cin>>s;
	max_len = 0;
	maxSameSub(s, k, 'a');
	maxSameSub(s, k, 'b');
	cout<<max_len;
	// cout<<max(maxSameSub(s, k, 'a'), maxSameSub(s, k, 'b'));
	return 0;
}