Let's take all non missing elements that are adjacent to at least one missing element, we need to find a value k that 
minimises the maximum absolute difference between k and these values. The best k is equal to 
(minimum value + maximum value) / 2. Then we find the maximum absolute difference between all adjacent pairs.
Complexity is O(n).

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
        
        ll cnt_non_neg = 0;
        ll val = -1;
        
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            
            if(a[i]>=0)
            {
                cnt_non_neg++;
                val = a[i];
            }
        }
        
        if(cnt_non_neg==0)
        {
            cout<<"0 0"<<endl;
            continue;
        }
        else if(cnt_non_neg==1)
        {
            cout<<"0 "<<val<<endl;
            continue;
        }
        
        
        
       
        ll mini_val = INT_MAX;
        
        
        for(ll i=0;i<n;i++)
        {
          if(a[i]==-1)
            continue;
        
        if(i==0)
        {
          if(a[i+1]==-1)
          {
              if(mini_val>a[i])
              {
                  mini_val = a[i];
                 
              }
          }
        }
        else if(i==n-1)
        {
            if(a[i-1]==-1)
            {
              if(mini_val>a[i])
              {
                  mini_val = a[i];
                 
              }
            }
        }
        else{
            if(a[i-1]==-1 || a[i+1]==-1)
            {
                if(mini_val>a[i])
                 {
                   mini_val = a[i];
                   
                 }
            }
        }
    }
    
    ll max_val = -1;
    
     for(ll i=0;i<n;i++)
        {
          if(a[i]==-1)
            continue;
        
        if(i==0)
        {
          if(a[i+1]==-1)
          {
              if(max_val< a[i])
              {
                  max_val = a[i];
                  
              }
          }
        }
        else if(i==n-1)
        {
            if(a[i-1]==-1)
            {
              if(max_val<a[i])
              {
                  max_val = a[i];
                  
              }
            }
        }
        else{
            if(a[i-1]==-1 || a[i+1]==-1)
            {
                if(max_val<a[i])
                 {
                   max_val = a[i];
                   
                 }
            }
        }
    }
    
    // cout<<mini_val<<" "<<max_val<<endl;
    
    ll total = mini_val+max_val;
    ll ans = total/2;
    
    if(total%2!=0)
    ans++;
    
    
    ll w = ans-mini_val;
    
    for(ll i=0;i<n;i++)
    {
        if(a[i]==-1)
        a[i]=ans;
    }
    
    ll diff = 0;
    
    for(ll i=0;i<n-1;i++)
    {
        diff = max(diff,abs(a[i]-a[i+1]));
    }
        
        cout<<diff<<" "<<ans<<endl;
    }
}
