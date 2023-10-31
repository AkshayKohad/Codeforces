#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(ll mid,vector<ll>a,ll k)
{
    ll n = a.size();
    
    
    for(ll i=0;i<n;i++)
    {
        ll c_used = 0;
        
        ll min_required = mid;    
        
        ll j=0;
        for(j=i;j<n;j++)
        {
          if(min_required <= a[j])
          {
            break;
          }
           c_used += min_required-a[j];
           
           min_required = max((ll)0,min_required-1);
         
        }
        
        if(j==n) continue;
        
        if(c_used<=k)
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
        ll n,k;
        cin>>n>>k;
        
        vector<ll>a(n);
        ll maxi = -1;
        for(ll i=0;i<n;i++)
        {
         cin>>a[i];
         maxi = max(a[i],maxi);
        }        
        
        ll l=0;
        ll r = maxi+k;
        ll ans = -1;
        
        while(l<=r)
        {
            ll mid = (l+r)/2;
            
            if(check(mid,a,k))
            {
                l = mid+1;
                ans = mid;
            }
            else{
                r = mid-1;
            }
        }
        
        cout<<ans<<endl;
      
    }
}
