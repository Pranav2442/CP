#include<bits/stdc++.h>
using namespace std;



void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}





int main(){
    int n;
    cin>>n;
    vector<int> v[n];

    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        for(int j=0;j<k;j++){
            int z;
            cin>>z;
            v[i].push_back(z);
        }
    }
    for(int i=0;i<n;i++){
        print(v[i]);
    }
}

