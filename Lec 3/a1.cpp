#include <iostream>
using namespace std;
int main() {
    int p, r, t;
    cin>>p>>r>>t;
    int si = (p*r*t)/100;
    cout<<"Simple Interest: ";
    cout<<si<<endl;
    int amount = p + si;
    cout<<"Amount: "<<amount<<endl;
}
