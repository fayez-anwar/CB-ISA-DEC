#include <iostream>
using namespace std;
int main() {
  int rows;
  cin>>rows;
  
  int val = 1;
  for(int i = 1; i <= rows; i++){
    for(int j = 1; j <= i; j++){
      cout<<val<<' ';
      val++;
    }
    cout<<endl;
  }
  
  
  
}
