#include<bits/stdc++.h>
using namespace std;






void print(vector<pair<int,int>>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}



int main(){
    vector<pair<int,int>> v={{2,3},{3,4},{4,5}};

    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }

    
print(v);
}