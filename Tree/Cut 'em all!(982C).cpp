#include <bits/stdc++.h>
using namespace std;


int dfs(int nd,vector<int>adj[],int &res,vector<int>&visited)
{
    visited[nd] = 1;
    
    int cnt_nd = 1;
    
    for(auto u:adj[nd])
    {
        if(visited[u]==1)
        {
            continue;
        }
        
        
        int node_cnt = dfs(u,adj,res,visited);

        cnt_nd+=node_cnt;

        if(node_cnt%2==0)
        res++;
        
    }
    
    return cnt_nd;
}
int main()
{
    int n;
    cin>>n;
    
    int edges = n-1;
    
    vector<int>adj[n+1];
    
    while(edges--)
    {
        int u,v;
        cin>>u>>v;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    if(n%2==1)
    {
        cout<<"-1";
        return 0;
    }
    
    vector<int>visited(n+1,0);
    
    int res = 0;
    
    dfs(1,adj,res,visited);
    
    cout<<res<<endl;
}
