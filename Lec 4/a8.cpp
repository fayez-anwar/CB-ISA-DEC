#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  
  //upper part..upward triangle
  for(int i = 1; i <= n; i++){
    //spaces i - 1
    for(int j = 1; j <= n - i; j++) {
      cout<<' ';
    }
    //* 2(n - i) + 1
    for(int k = 1; k <= (2*i) - 1; k++){
      cout<<'*';
    }
    cout<<endl;
  }
  
  int m = n - 1;
  //lower part..downward triangle
  for(int i = 1; i <= m; i++){
    //spaces i - 1
    cout<<' ';
    for(int j = 1; j <= i - 1; j++) {
      cout<<' ';
    }
    //* 2(n - i) + 1
    for(int k = 1; k <= (2*(m-i)) + 1; k++){
      cout<<'*';
    }
    cout<<endl;
  }
}
