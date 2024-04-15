#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int>adj[n+1];
    
    
    vector<pair<int,int>>edges;
    
    for(int i=1;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        edges.push_back({min(a,b),max(a,b)});
        
        adj[a].push_back(b);
        adj[b].push_back(a);
        
    }
    
    map<pair<int,int>,int>mp;
    
    int flag = 0;
    
    for(int i=1;i<=n;i++)
    {
        if(adj[i].size()>=3)
        {
            flag=1;
            
            for(int j=0;j<3;j++)
            {
                mp[{min(i,adj[i][j]),max(i,adj[i][j])}] = j;
            }
            
            break;
        }
    }
    
    if(flag==1)
    {
        int val = 3;
        
        for(int i=0;i<n-1;i++)
        {
            if(mp.find({edges[i].first,edges[i].second}) != mp.end())
            {
                cout<<mp[{edges[i].first,edges[i].second}]<<endl;
            }
            else{
                cout<<val<<endl;
                val++;
            }
        }
    }
    else{
        for(int i=0;i<n-1;i++)
        {
                cout<<i<<endl;
        }
    }
}
