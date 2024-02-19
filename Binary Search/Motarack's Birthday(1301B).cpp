#include <bits/stdc++.h>
using namespace std;


#define ll long long

bool check(ll diff,vector<ll>a)
{
    ll index = -1;
    ll mini_val = INT_MAX;
    ll n = a.size();
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
                  index = i;
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
                  index = i;
              }
            }
        }
        else{
            if(a[i-1]==-1 || a[i+1]==-1)
            {
                if(mini_val>a[i])
                 {
                   mini_val = a[i];
                   index = i;
                 }
            }
        }
    }
    
    
    ll w = mini_val+diff;
   // cout<<"ffr "<<w<<endl;
   for(ll i=0;i<n;i++)
   {
       if(a[i]==-1)a[i]=w;
       
   }
    for(ll i=0;i<n-1;i++)
    {
        ll res_diff;
        
        res_diff = abs(a[i]-a[i+1]);
        
        if(res_diff>diff)
        return false;
    }
    
    return true;
}

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
        
        ll mini = INT_MAX;
        ll maxi = -1;
        
        for(ll i=0;i<n;i++)
        {
            if(a[i]==-1)continue;
            
            mini = min(a[i],mini);
            maxi = max(a[i],maxi);
            
        }
        ll ans = -1;
        
        ll l = 0;
        ll r = maxi - mini +1;
        
       
        while(l<=r)
        {
            ll mid = (l+r)/2;
            
            //cout<<mid<<endl;
            if(check(mid,a))
            {
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        
        
        ll index = -1;
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
                  index = i;
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
                  index = i;
              }
            }
        }
        else{
            if(a[i-1]==-1 || a[i+1]==-1)
            {
                if(mini_val>a[i])
                 {
                   mini_val = a[i];
                   index = i;
                 }
            }
        }
    }
    
    ll w = mini_val+ans;
    
        
        cout<<ans<<" "<<w<<endl;
    }
}
