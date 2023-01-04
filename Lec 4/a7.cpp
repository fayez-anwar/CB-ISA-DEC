#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  
  for(int i = 1; i <= n; i++){
    //spaces i - 1
    for(int j = 1; j <= i - 1; j++) {
      cout<<' ';
    }
    //* 2(n - i) + 1
    for(int k = 1; k <= (2*(n-i)) + 1; k++){
      cout<<'*';
    }
    cout<<endl;
  }
}
