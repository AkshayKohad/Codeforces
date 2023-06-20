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



void solve(int node,vector<int>adj[],vector<int>&visited,unordered_set<int>&par_leaf_node,int &res,int count)
{
    visited[node] = 1;
    if(count == res)
    {
        par_leaf_node.insert(node);
        visited[node] = 0;
        return;
    }
    
    for(auto adj_nd : adj[node])
    {
        if(visited[adj_nd]==0)
        {
            solve(adj_nd,adj,visited,par_leaf_node,res,count+1);
        }
    }
    
    visited[node] = 0;
}

int main()
{
    
    int n;
    cin>>n;
    
    if(n==1)
    cout<<"1";
    
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
   // cout<<node<<endl;
    dfs(node,adj,visited,nd,res,0);
    
  
  // parent of leaf nodes which gave us diameter
  
  int pnd1 = adj[node][0];
  int pnd2 = adj[nd][0];
  
  unordered_set<int>par_leaf_node;
  
  // finding other leaf nodes present in  parent of node and nd
  
  for(auto k:adj[pnd1])
  {
      if(adj[k].size()==1)
      {
          par_leaf_node.insert(k);
      }
  }
  for(auto k:adj[pnd2])
  {
      if(adj[k].size()==1)
      {
          par_leaf_node.insert(k);
      }
  }
  
 // traversing node and nd to get other nodes having distance as res
 
 solve(node,adj,visited,par_leaf_node,res,0);
 solve(nd,adj,visited,par_leaf_node,res,0);
  
  
  // all the nodes which have max distance as res will have increase in diameter by 1 when addtional node gets connected to them
  for(int i=1;i<=n;i++)
  {
      if(par_leaf_node.find(i)!=par_leaf_node.end())
      {
          cout<<res+1<<endl;
      }
      
      else{
          cout<<res<<endl;
      }
  }
  
  
  }
   
}
