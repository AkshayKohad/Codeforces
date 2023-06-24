#include <bits/stdc++.h>
using namespace std;

int dfs(int root,vector<int>adj[],vector<int>&visited,int &m,int count_cats,vector<int>& is_cat_present)
{
    if(count_cats > m)
    return 0;
    
    visited[root] = 1;
    
    if(adj[root].size()==1)
    {
        int nd = adj[root][0];
        
        if(visited[nd]==1)
        {
          visited[root] = 0;
          
          return 1;
        }
    }
    
    
    int result = 0;
    for(auto adj_nd : adj[root])
    {
        if(visited[adj_nd]==0)
        {
            
            if(is_cat_present[adj_nd]==1)
            {
                result += dfs(adj_nd,adj,visited,m,count_cats+1,is_cat_present);
            }
            
            else{
                result += dfs(adj_nd,adj,visited,m,0,is_cat_present);
            }
            
        }
    }
    
    visited[root] = 0;
    
    return result;
}

int main()
{
    int n,m;
    
    cin>>n>>m;
    
    vector<int>is_cat_present(n+1);
    
    for(int i=0;i<n;i++)
    cin>>is_cat_present[i+1];
    
    vector<int>adj[n+1];
    
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        
        adj[x].push_back(y);
        adj[y].push_back(x);
        
    }
    
    vector<int>visited(n+1,0);
    
    if(is_cat_present[1]==0)
       cout<<dfs(1,adj,visited,m,0,is_cat_present);
    
    else
       cout<<dfs(1,adj,visited,m,1,is_cat_present);
    
    
    
}
