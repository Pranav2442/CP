#include<bits/stdc++.h>
using namespace std;



bool pallidrome(string s,int i){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return pallidrome(s,i+1);

    
}


int main(){
    string s;
    int size=s.size();
    getline(cin,s);
    cout<<pallidrome(s,0);
}