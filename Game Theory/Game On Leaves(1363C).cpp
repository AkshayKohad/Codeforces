#include <bits/stdc++.h>
using namespace std;

void count_nodes(int src,vector<int>adj[],vector<int>&visited,int &res)
{
    res++;
    visited[src]=1;
    
    for(auto u:adj[src])
    {
        if(visited[u]==0)
        {
            count_nodes(u,adj,visited,res);
        }
    }
    
    
}

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        
        if(n==1)
        {
        cout<<"Ayush"<<endl;
        continue;
        }    
        
        vector<int>adj[n+1];
        
        for(int i=0;i<n-1;i++)
        {
            int u,v;
            cin>>u>>v;
            
            adj[v].push_back(u);
            adj[u].push_back(v);
        }
        
        if(adj[x].size()==1)
        {
            cout<<"Ayush"<<endl;
            continue;
        }
        
        vector<int>visited(n+1,0);
        priority_queue<int>pq;
        visited[x]=1;
        for(auto child : adj[x])
        {
            // cout<<child<<endl;
            int res = 0;
            count_nodes(child,adj,visited,res);
            pq.push(res);
        }
        
        int cnt = 0;
        // cout<<pq.size()<<endl;
        // cout<<pq.top()<<endl;
        
        while(pq.size()>1)
        {
            cnt++;
            int val = pq.top();
            pq.pop();
            val--;
            
            if(val>0)
            pq.push(val);
        }
        
        if(cnt%2==0)
        {
            cout<<"Ayush"<<endl;
        }
        else{
            cout<<"Ashish"<<endl;
        }
    }
}
