#include <bits/stdc++.h>
using namespace std;

#define ll long long


ll search(ll k, ll x)
{
    ll l=1;
    ll r=k;
    
    ll ind_ans = 0;
    
    ll ans = 0;
    
    while(l<=r)
    {
        ll mid = (l+r)/2;
        
        ll res = mid*(mid+1);
        
        if(res==2*x)
        {
            ind_ans = mid;
            
            return mid;
            
        }
        else if(res<2*x)
        {
            ind_ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
        
    }
    
    if(ind_ans<k)
    ind_ans++;
   
    ll res = ind_ans*(ind_ans+1);
    
    
    if(res>2*x)
    return ind_ans;
    
    ans += ind_ans;
    x = x-res/2;
    
    
     l=1;
     r=k-1;
    
     ind_ans = 0;
    
    
    while(l<=r)
    {
        ll mid = (l+r)/2;
        
        ll res = mid*(2*k-mid-1);
        
        if(res==2*x)
        {
            ind_ans = mid;
            return ans+mid;
        }
        else if(res<2*x)
        {
            ind_ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
        
    }
    
    if(ind_ans<k-1)
    ind_ans++;
   
    res = ind_ans*(ind_ans+1);
    
    
   
    return ans+ind_ans;
    
    
}
int main()
{
  ll t;
  cin>>t;
  
  while(t--)
  {
      ll k,x;
      cin>>k>>x;
      
      ll ind = search(k,x);
      
      cout<<ind<<"\n";
  }
  
  
}
