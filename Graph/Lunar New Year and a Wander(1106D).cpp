#include<bits/stdc++.h>
using namespace std;
 
 
 
// Driver Program to test above functions
int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<int>adj[n];
    
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
    
    vector<int>res;
    vector<int>visited(n,0);
    
   
    
    res.push_back(0);
    visited[0]=1;
    set<int>s;
    while(res.size()<n)
    {
        int curr = res.back();
        
        for(auto node: adj[curr])
        {
            if(visited[node]==0)
            {
                s.insert(node);
                visited[node]=1;
            }
        }
        
        auto it = s.begin();
        
       // visited[*it] = 1;
        res.push_back(*it);
        s.erase(it);
    }
    
    for(int i=0;i<n;i++)
    cout<<res[i]+1<<" ";
    
return 0;
}
