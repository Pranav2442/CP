#include<bits/stdc++.h>
using namespace std;




vector<int> bfs(int n,vector<int> adj[]){
    vector<int> bfs;
    vector<int> visited(n+1,0);

    for(int i=1;i<=n;i++){
        if(!visited[i]){
            queue<int> q;
            q.push(i);
            visited[i]=1;
            while (!q.empty())
            {
                int node=q.front();
                q.pop();
                bfs.push_back(node);
                for(auto it:adj[node]){
                    if(!visited[it]){
                        q.push(it);
                        visited[it]=1;
                    }
                }
            }
            
        }
    }
}

int main(){

}