#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> ans;
            map<int,int> m;
        for(int i=0;i<nums.size();i++){
                m[nums[i]]++;
        }
        
        for(auto&x:m){
            
            if(x.second>=2){
                ans.push_back(x.first);
            }
            
        }
        return ans;
        
    }
};