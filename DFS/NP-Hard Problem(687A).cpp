#include <bits/stdc++.h>
using namespace std;


bool solve(int node,vector<int>adj[],vector<int>&visited,int status)
{
    visited[node] = status;
    
    for(auto u:adj[node])
    {
        if(visited[u]==-1)
        {
            if(solve(u,adj,visited,1-status))
            return true;
            
            
        }
        else{
            if(visited[u]==visited[node])
            return true;
        }
    }
    
    return false;
}

int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<int>adj[n+1];
    
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    vector<int>visited(n+1,-1);
    
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==-1)
        {
            if(solve(i,adj,visited,0))
            {
                cout<<"-1"<<endl;
                return 0;
            }   
        }
    }
    
    vector<int>first;
    vector<int>second;
    
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        first.push_back(i);
        
        else
        second.push_back(i);   
    }
    
    cout<<first.size()<<endl;
    
    for(int i=0;i<first.size();i++)
    {
        cout<<first[i]<<" ";
    }
    
    cout<<endl;
    
    cout<<second.size()<<endl;
    
    for(int i=0;i<second.size();i++)
    {
        cout<<second[i]<<" ";
    }
}
