#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll t;
  cin>>t;
  
  while(t--)
  {
    ll n,m;
    cin>>n>>m;
    
    ll t0,t1,t2;
    
    cin>>t0>>t1>>t2;
    
    vector<vector<ll>>adj[n];
    
    for(ll i=0;i<m;i++)
    {
        ll u,v,l1,l2;
       
        cin>>u>>v>>l1>>l2;
        u--;
        v--;
        
        adj[u].push_back({v,l1,l2});
        adj[v].push_back({u,l1,l2});
    }
    
    set<pair<ll,ll>>st;
    
    st.insert({t0,n-1});
    
    for(ll i=0;i<n-1;i++)
    {
        st.insert({-1e9,i});
    }
    
    vector<ll>dist(n,-1e9);
    
    dist[n-1]=t0;
    
    while(st.empty()==false)
    {
        auto p = *st.rbegin();
        
        st.erase(p);
        
        ll d = p.first;
        ll u = p.second;
        
        for(auto e:adj[u])
        {
            ll v = e[0];
            ll l1 = e[1];
            ll l2 = e[2];
            
            ll d1  = (d-l1>=t2 || d<=t1)? d-l1:d-l2;
            
            if(d1==d-l2)
            {
                d1 = max(d1,t1-l1);
            }
            
            if (dist[v] < d1) {
                st.erase({dist[v], v});
                dist[v] = d1;
                st.insert({d1, v});
            }
        }
        
    }
    
     cout<<(dist[0]>=0 ? dist[0] : -1)<<'\n';
     
  }
}
