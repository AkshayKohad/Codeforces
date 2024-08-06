#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
      ll n,m,x;
      cin>>n>>x>>m;
      
      vector<pair<ll,ll>>a(m);
      
      for(ll i=0;i<m;i++)
      {
          ll start,end;
          cin>>start>>end;
          
          a[i] = {start,end};
      }
      
      
      vector<pair<ll,ll>>res;
      
      
      ll start = -1;
      ll end = -1;
      
      ll j=0;
      while(j<m)
      {
          if(start==-1 && end==-1)
          {
              if(a[j].first<=x && a[j].second>=x)
              {
                  start = a[j].first;
                  end = a[j].second;
                  
              }
              
              j++;
              continue;
              
          }
          
         
          if(end>= a[j].first && end<=a[j].second)
          {
              end = max(end,a[j].second);
              start = min(start,a[j].first);
          }
          else if(start<=a[j].second && start>=a[j].first)
          {
              start = min(start,a[j].first);
              end = max(end,a[j].second);
          }
          
          j++;
          
      }
      
      
      ll ans = 1;
      
      if(start !=-1 && end!=-1)
      ans = end-start+1;
      
      cout<<ans<<"\n";
      
      
  }
}
