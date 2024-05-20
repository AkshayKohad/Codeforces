#include <bits/stdc++.h>

using namespace std;

#define ll long long int

bool check(ll dish_val,vector<int>a,vector<int>b,ll n,ll k)
{
    ll total_additional_req = 0LL;
    
    for(ll i=0;i<n;i++)
    {
        if (dish_val > (LLONG_MAX - b[i]) / a[i]) {
            return false; // Would overflow, so this dish_val is too high
        }
        
        total_additional_req += max((ll)a[i]*dish_val - b[i],0LL);
        
        if (total_additional_req > k) {
            return false; // Early exit if already exceeded k
        }
    }
    
    if(total_additional_req <= k )
    return true;
    
    return false;
}

int main()
{
    ll n,k;
    cin>>n>>k;
    
    vector<int>a(n);
    vector<int>b(n);
    
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(ll i=0;i<n;i++)
    {
        cin>>b[i];
    }
    
    
    
    ll l=0;
    
    ll r = 0;
    
    for(ll i=0;i<n;i++)
    {
        r = max(r,(b[i] + k)/a[i]);
    }
   
    ll ans = 0;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        
        if(check(mid,a,b,n,k))
        {
            ans = mid;
            l = mid+1;
        }
        
        else{
            r = mid-1;
        }
    }
    
    
    cout<<ans;
}
