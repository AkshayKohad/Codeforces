#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(ll diff,vector<pair<ll,ll>>&a,ll &n)
{
    ll f = 0;
    ll s = 0;
    
    for(ll i=0;i<n;i++)
    {
        f -= diff;
        s += diff;
        
        if(f>a[i].second || s<a[i].first)
        {
           return false;
        }
        else{
            f = max(f,a[i].first);
            s = min(s,a[i].second);
        }
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
        
        
        vector<pair<ll,ll>>a(n);
        
        ll l=0;
        ll r=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i].first>>a[i].second;
            
            r = max({r,a[i].first,a[i].second});
        }
        
        ll ans = -1;
        
        while(l<=r)
        {
            ll mid = (l+r)/2;
            
            if(check(mid,a,n))
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
