#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll t;
  cin>>t;
  
  while(t--)
  {
      ll n,w;
      cin>>n>>w;
      
      multiset<ll>ms;
      
      for(ll i=0;i<n;i++)
      {
          ll val;
          cin>>val;
          
          ms.insert(val);
          
      }
      
      ll ans=1;
      ll left = w;
      
      while(ms.empty()==false)
      {
          auto it = ms.upper_bound(left);
          
          if(it==ms.begin())
          {
               left = w;
               ans++;
          }
          else{
              it--;
              ll val = *it;
              left-=val;
              ms.erase(it);
          }
      }
      
      cout<<ans<<"\n";
  }
  
  
}
