#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, e;
    cin>>a>>b>>c>>d>>e;

    int percentage = (a+b+c+d+e)/5;
    cout<<percentage<<endl;

    if(percentage < 40){
        cout<<"Grade F";
    }
    else if(percentage < 60){
        cout<<"Grade E";
    }
    else if(percentage < 70){
        cout<<"Grade D";
    }
    else if(percentage < 80){
        cout<<"Grade C";
    }
    else if(percentage < 90){
        cout<<"Grade B";
    }
    else{
        cout<<"Grade A";
    }

}
