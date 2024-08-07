#include <bits/stdc++.h>
using namespace std;

#define boost ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long


bool check(ll index,vector<ll>&queries,vector<pair<ll,ll>>&ranges,ll n,ll m)
{
   // cout<<index<<endl;
    vector<ll>prefix_sum(n+1,0);
    
    for(ll i=1;i<=index;i++)
    {
        prefix_sum[queries[i]]=1;
    }
    
    
    
    for(ll i=1;i<=n;i++)
    {
        prefix_sum[i] += prefix_sum[i-1];
    }
    
   
   
    for(ll i=1;i<=m;i++)
    {
        pair<ll,ll>cur = ranges[i];
        
        ll start = cur.first;
        ll end = cur.second;
        
        ll sz = end-start+1;
        
        ll val = prefix_sum[end]-prefix_sum[start-1];
        
      
        
        if(val*2>sz)
        return true;
    }
    
    return false;
}
int main()
{
  ll t;
  cin>>t;
  
  while(t--)
  {
      ll n,m;
      cin>>n>>m;
      
      vector<pair<ll,ll>>ranges(m+1);
      
      for(ll i=1;i<=m;i++)
      {
          ll ini,end;
          cin>>ini>>end;
          
          ranges[i] = {ini,end};
          
      }
      
      ll q;
      cin>>q;
      
      vector<ll>queries(q+1);
      
      for(ll i=1;i<=q;i++)
      {
          cin>>queries[i];
      }
      
      ll l=1;
      ll r=q;
      
      ll ans=-1;
      
      while(l<=r)
      {
          ll mid = (l+r)/2;
          
          if(check(mid,queries,ranges,n,m))
          {
              ans = mid;
              r = mid-1;
          }
          else{
              l = mid+1;
          }
      }
      
      cout<<ans<<"\n";
      
  }
}
