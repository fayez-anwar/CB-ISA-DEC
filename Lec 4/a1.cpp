#include <iostream>
using namespace std;
int main() {
    int age;
    cin>>age;

    if(age <= 13){
        cout<<"Child";
    }

    if(age >= 14 && age <= 17){
        cout<<"Teen";
    }

    if(age >= 18){
        cout<<"Adult";
    }

    if(age <= 13){
        cout<<"Child";
    }
    //age > 13 and age >= 14 have same meaning?
    else if(age <= 17){
        cout<<"Teen";
    }
    //age > 17 or same to say age >= 18
    else{
        cout<<"Adult";
    }
}
