#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll lower_bound(vector<ll>&a,ll n,ll val)
{
    ll l=0;
    ll r = n;
    
    while(l<=r)
    {
        ll mid = (l+r)/2;
        
        if(a[mid]>=val)
        {
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    
    return r;
}

ll upper_bound(vector<ll>&a,ll n,ll val)
{
    ll l=0;
    ll r = n;
    
    while(l<=r)
    {
        ll mid = (l+r)/2;
        
        if(a[mid]<=val)
        {
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    
    return r;
}

int main()
{
  ll t;
  cin>>t;
  
  while(t--)
  {
      ll n,x;
      cin>>n>>x;
      
      vector<ll>a(n);
      
      for(ll i=0;i<n;i++)
       cin>>a[i];
      
      
      sort(a.begin(),a.end());
      
      ll res = 0;
      
      ll i=n-1;
      ll j=n;
      while(i>=0)
      {
          ll val = x/a[i];
          if(x%a[i]!=0)
          {
              val++;
          }
          
          ll len = j-i;
          
          if(len>=val)
          {
              res++;
              j=i;
              i--;
              
          }
          else{
              i--;
          }
      }
      
      cout<<res<<endl;
  }
}
