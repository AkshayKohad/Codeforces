#include <bits/stdc++.h>
using namespace std;

#define ll long long


bool check(ll &limit,vector<ll>&a,ll &m)
{
    ll cur = a[0];
    
    ll val = (a[0]+limit)%m;
    
    ll prev = cur;
    
    if(val<=cur)
    prev = 0;
    
    
    for(ll i=1;i<a.size();i++)
    {
        cur = a[i];
        val = (a[i]+limit)%m;
        
        if(val<=cur)
        {
            
            if(val<prev && prev<=cur)
            prev = cur;
            
           
            
           
            
        }
        
        else{
            if(val<prev)
            return false;
            
            if(prev<=val && prev<=cur)
            prev = cur;
        }
        
    }
    
    return true;
    
}

int main()
{
    ll n,m;
    cin>>n>>m;
    
    vector<ll>a(n);
    
    for(int i=0;i<n;i++)
    cin>>a[i];
    
   bool flag = true;
   
   for(int i=0;i<n-1;i++)
   {
       if(a[i]>a[i+1])
       {
           flag=false;
           break;
       }
   }
   
   if(flag==true)
   {
       cout<<"0";
       return 0;
   }
   
    
    ll l=1;
    ll r=m;
    
    ll ans=-1;
    
    while(l<=r)
    {
    
      ll mid = (l+r)/2;
      
      if(check(mid,a,m))
      {
          ans = mid;
          r = mid-1;
      }
      
      else{
          l = mid+1;
      }
        
    }
    
    cout<<ans;
    
    
    
}
