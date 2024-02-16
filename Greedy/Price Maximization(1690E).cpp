#include <bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{
  ll t;
  cin>>t;
  
  while(t--)
  {
      ll n,k;
      cin>>n>>k;
      
      vector<ll>a(n);
      
      for(ll i=0;i<n;i++)
      cin>>a[i];
      
      vector<ll>mod_cnt(k,0);
      
      ll res = 0;
      
      for(ll i=0;i<n;i++)
      {
          res = res + a[i]/k;
          
          mod_cnt[a[i]%k]++;
      }
      
      
      ll i=1;
      ll j=k-1;
      
      while(i<j)
      {
          ll first = i;
          ll second = j;
          
          ll val = min(mod_cnt[i],mod_cnt[j]);
          
          res += val;
          
          mod_cnt[j] -= val;
          mod_cnt[i] -= val;
          if(mod_cnt[i]<=mod_cnt[j])
          {
              
              i++;
          }
          else{
             
              
              if(i+j > k)
              {
                  j--;
              }
              else{
                  i++;
                  j--;
              }
          }
      }
      
      for(ll i=1;i<k;i++)
      {
          if(2*i >= k)
          {
              res += mod_cnt[i]/2;
          }
      }
      
      cout<<res<<endl;
  }
}
