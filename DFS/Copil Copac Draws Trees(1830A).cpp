#include <bits/stdc++.h>
using namespace std;

void dfs(int src,int prev,vector<int>adj[],int cur,int value,int &res,map<pair<int,int>,int>&index)
{
    res = max(res,value);
    
    for(auto u:adj[src])
    {
        if(u==prev)
        continue;
        
        int ind = index[{src,u}];
        
        if(ind<cur)
        {
            dfs(u,src,adj,ind,value+1,res,index);
        }
        else{
             dfs(u,src,adj,ind,value,res,index);
        }
        
    }
}


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        map<pair<int,int>,int>index;
        
        
        
        vector<int>adj[n+1];
        
        for(int i=0;i<n-1;i++)
        {
            int x,y;
            cin>>x>>y;
            
            adj[x].push_back(y);
            adj[y].push_back(x);
            
            index[{x,y}] = i+1;
            index[{y,x}] = i+1;
            
        }
        int value=1;
        int res = 1;
        dfs(1,-1,adj,0,value,res,index);
        
       
        
        cout<<res<<endl;
    }
}
