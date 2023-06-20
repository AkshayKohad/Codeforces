how to find diameter in undirected tree - https://codeforces.com/blog/entry/101271


#include <bits/stdc++.h>
using namespace std;


void dfs(int root,vector<int>adj[],vector<int>&visited,int &node,int &res,int count)
{
    visited[root] = 1;
    
    if(res<count)
    {
        res = count;
        node = root;
    }
    
    for(auto u : adj[root])
    {
        if(visited[u]==0)
        {
            dfs(u,adj,visited,node,res,count+1);
        }
    }
    
    visited[root] = 0;
}

int main()
{
    
    int n;
    cin>>n;
    
    if(n==1)
    cout<<"0";
    
    else{
    vector<int>adj[n+1];
    
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        
        adj[x].push_back(y);
        adj[y].push_back(x);
        
    }
    
    vector<int>visited(n+1,0);
    
    int node = 0;
    int res = 0;
    int count = 0;
    dfs(1,adj,visited,node,res,0);
    
    int nd = 0;
    res = 0;
    dfs(node,adj,visited,nd,res,0);
    
    cout<<2*3*res/2;
    }
    
}
