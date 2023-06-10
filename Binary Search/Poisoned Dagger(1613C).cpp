#include <bits/stdc++.h>

using namespace std;

#define ll long long


bool check(ll k,ll h,ll n,vector<ll>a)
{
    ll res = 0;
    
    for(ll i=1;i<n;i++)
    {
        ll diff = a[i]-a[i-1];
        
        if(diff>=k)
        {
            res = res + k;
        }
        
        else{
            res = res + diff;
        }
    }
    
    res = res + k;
    
    if(res>=h)
    return true;
    
    return false;
}

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
      ll n,h;
      
      cin>>n>>h;
      
      vector<ll>a(n);
      
      for(ll i=0;i<n;i++)
      {
         cin>>a[i];    
      }
      
      
      ll l = 0;
      
      ll r = h;
      
      ll ans = -1;
      while(l<=r)
      {
          ll  mid = (l+r)/2;
          
          if(check(mid,h,n,a))
          {
           ans = mid;
           
           r = mid-1;
          }
          
          else{
              l = mid+1;
          }
          
      }
      
      
      cout<<ans<<endl;
    }
    
    
    
}
