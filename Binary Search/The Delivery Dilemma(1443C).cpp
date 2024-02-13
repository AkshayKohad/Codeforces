#include <bits/stdc++.h>
using namespace std;


#define ll long long

bool check(ll val,vector<pair<ll,ll>>&res,vector<ll>&b,ll &n)
{
    ll i=0;
    
    while(i<n)
    {
        if(res[i].first > val)
        {
            break;
        }
        
        i++;
    }
    
    ll res_sum = 0;
    
    while(i<n)
    {
        res_sum += b[res[i].second];
        i++;
    }
    
    if(res_sum > val)
    return false;
    
    
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
        
        vector<ll>b(n);
        
        ll l=1;
        ll r=1;
        
        ll sum = 0;
        
        for(ll i=0;i<n;i++)
        {
         cin>>a[i];
         r = max(r,a[i]);
        }
        for(ll i=0;i<n;i++)
        {
           cin>>b[i];
           sum += b[i];
        }
        
        r = max(r,sum);
        
        vector<pair<ll,ll>>res;
        
        for(ll i=0;i<n;i++)
        {
            res.push_back({a[i],i});
        }
        
        sort(res.begin(),res.end());
        
        ll ans = -1;
        
        while(l<=r)
        {
            ll mid = (l+r)/2;
            
            if(check(mid,res,b,n))
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
