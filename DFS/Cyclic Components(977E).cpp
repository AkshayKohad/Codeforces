#include <bits/stdc++.h>
using namespace std;

bool dfs(int src,int par,vector<int>&visited,vector<int>adj[])
{
    visited[src] = 1;
    if(adj[src].size()!=2)return false;
   
   bool res = true;
    for(auto u : adj[src])
    {
        if(visited[u]==0)
        {
           
            res = res & dfs(u,src,visited,adj);
            
        }
       
    }
    
 
   
    return res;
    
    
    
}

void dfs_mark(int src,vector<int>&visited1,vector<int>adj[])
{
    visited1[src] = 1;
    
     for(auto u : adj[src])
    {
        if(visited1[u]==0)
        {
           
            dfs_mark(u,visited1,adj);
            
        }
       
    }
    
    
}

int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<int>adj[n];
    
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        
        adj[x-1].push_back(y-1);
        adj[y-1].push_back(x-1);
    }
    
    vector<int>visited(n,0);
    vector<int>visited1(n,0);
    int result = 0;
    for(int i=0;i<n;i++)
    {
        if(visited[i]==0 && visited1[i]==0)
        {
            //cout<<i<<endl;
            int nodes=0;
            int edges=0;
            if(dfs(i,-1,visited,adj))
            {
               // cout<<i<<endl;
               result++; 
            }
            
            dfs_mark(i,visited1,adj);
        }
    }
    
    cout<<result;
}
