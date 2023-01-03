#include <iostream>
using namespace std;
int main() {
    //take input n
    int n;
    cin>>n;

    int sum = 0;
    int maxValue = -9999999, minValue = 9999999;
    for(int i = 1; i <= n; i++){
        int x;
        cin>>x;
        
        //can x be maximum
        if(x > maxValue){
            //then x is the maximum value
            maxValue = x;
        }
        
        //can x be minimum
        if(x < minValue){
            minValue = x;
        }
        sum += x;
    }
    cout<<"Sum: "<<sum<<endl;
    float mean = (float)sum/n;
    cout<<"Mean: "<<mean<<endl;

    cout<<"Minimum Value: "<<minValue<<endl;
    cout<<"Maximum Value: "<<maxValue<<endl;
}
