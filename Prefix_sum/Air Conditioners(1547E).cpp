#include <bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{
  ll q;
  cin>>q;
  
  while(q--)
  {
      ll n,k;
      cin>>n>>k;
      
      vector<ll>a(k+1);
      for(ll i=1;i<=k;i++)
      {
          cin>>a[i];
      }
      
      
      ll max_temp = 0;
      vector<ll>t(k+1);
      vector<ll>prefix_temp(n+1,INT_MAX);
      vector<ll>suffix_temp(n+1,INT_MAX);
      
      for(ll i=1;i<=k;i++)
      {
          cin>>t[i];
          max_temp = max(max_temp,t[i]);
          prefix_temp[a[i]] = t[i];
          suffix_temp[a[i]] = t[i];
      }
      
      
      for(ll i=1;i<=n;i++)
      {
          if(prefix_temp[i]>prefix_temp[i-1]+1)
          {
              prefix_temp[i] = prefix_temp[i-1]+1;
          }
          
      }
      
      for(ll i=n-1;i>0;i--)
      {
          if(suffix_temp[i]>suffix_temp[i+1]+1)
          {
              suffix_temp[i] = suffix_temp[i+1]+1;
          }
          
      }
      
      
      for(ll i=1;i<=n;i++)
      {
          cout<<min(prefix_temp[i],suffix_temp[i])<<" ";
      }
      cout<<endl;
      
  }
}
