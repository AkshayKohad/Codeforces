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
      
      int i=0;
      ll res = 0;
      while(i<n)
      {
          ll cnt=1;
          
          ll j=i+1;
          
          while(j<n && a[j]*2>a[j-1])
          {
              cnt++;
              j++;
          }
          
          if(cnt>=k+1)
          {
              res += cnt-k;
          }
          
          i=j;
          
      }
      
      cout<<res<<endl;
      
  }
}
