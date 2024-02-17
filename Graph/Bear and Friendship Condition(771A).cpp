#include <bits/stdc++.h>
using namespace std;

#define ll long long


void dfs(ll src,vector<ll>adj[],vector<ll>&visited,ll &cnt_edges,ll &cnt_vertices)
{
    visited[src] = 1;
    cnt_edges += adj[src].size();
    cnt_vertices++;
    for(auto u : adj[src])
    {
        if(visited[u]==0)
        {
            dfs(u,adj,visited,cnt_edges,cnt_vertices);
        }
    }
}


int main()
{
 ll n,m;
 cin>>n>>m;
 vector<ll>adj[n+1];
 
 for(ll i=0;i<m;i++)
 {
     ll a,b;
     cin>>a>>b;
     
     adj[a].push_back(b);
     adj[b].push_back(a);
     
     
 }
 
 vector<ll>visited(n+1,0);
 
 for(ll i=1;i<=n;i++)
 {
     if(visited[i]==0)
     {
         ll cnt_vertices = 0;
         ll cnt_edges = 0;
         dfs(i,adj,visited,cnt_edges,cnt_vertices);
         
         if(cnt_edges != cnt_vertices*(cnt_vertices-1))
         {
             cout<<"NO"<<endl;
             return 0;
         }
     }
 }
 
 cout<<"YES"<<endl;
 
}
