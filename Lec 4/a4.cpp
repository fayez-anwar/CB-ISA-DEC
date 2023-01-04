#include <iostream>
using namespace std;
int main() {
  //a d
  //a+d, a+2d, a+3d, ....., a+10d;
  
  int a, d;
  cin>>a>>d;
  
  int i = 1;
  while(i <= 10){
    cout<<(a + (i*d))<<' ';
    i++;
  }
  
  cout<<endl;
  
  for(int i = 1; i <= 10; i++){
    cout<<(a + (i*d))<<' ';
  }
  
}
