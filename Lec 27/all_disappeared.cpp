#include<bits/stdc++.h> 
using namespace std; 

int a[100000];

int main(){ 
    int n;
    cin>>n;
    // int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n; i++){
        int idx = abs(a[i]) - 1;
        if(a[idx] > 0){
            a[idx] *= -1;
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            cout<<i+1<<' ';
        }
    }
}