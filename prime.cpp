#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n<=1){
        cout<<"neither composite nor prime";
    } else {
    
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"not prime";
            break;
        } else{
    cout<<" prime";
    }
    }

    }

}