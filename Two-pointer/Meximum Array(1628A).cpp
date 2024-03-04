#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll t;
  cin>>t;
  
  while(t--)
  {
      ll n;
      cin>>n;
      
      vector<ll>a(n);
      
      map<ll,vector<ll>>mp;
      for(ll i=0;i<n;i++)
      {
          cin>>a[i];
          mp[a[i]].push_back(i);
          
      }
      
      ll cnt = 0;
      ll cur_index=0;
      
      vector<ll>res;
      
      while(cur_index<n)
      {
          ll mex = 0;
          ll skip_index = cur_index;
          for(;mex<=n+1;mex++)
          {
              
             auto it = lower_bound(mp[mex].begin(),mp[mex].end(),cur_index);
              
             if(it==mp[mex].end())
             break;
             
             skip_index = max(skip_index,*it);
              
          }
          
          res.push_back(mex);
          cur_index = skip_index+1;
          
        
      }
      
      cout<<res.size()<<endl;
      
      for(ll i=0;i<res.size();i++)
      cout<<res[i]<<" ";
      
      cout<<endl;
      
      
  }
  
  
}
