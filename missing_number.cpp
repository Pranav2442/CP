#include<bits/stdc++.h>
using namespace std;



int Missing(int n,int arr[],int i){

    while(i<n){

        int correctindex=arr[i];

        if(arr[i]!=arr[correctindex]){
            swap(arr[i],arr[correctindex]);
        }else{
            i++;
        }


    }
    for(int i=0;i<n;i++){
    if(arr[i]!=i){
        cout<<i;
    }
    }

}


int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){

        cin>>arr[i];

    }

    Missing(n,arr,1);
}