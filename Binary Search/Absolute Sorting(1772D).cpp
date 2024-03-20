#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll check(ll x,vector<ll>&a, ll &n)
{
    for(ll i=0;i<n-1;i++)
    {
        if(abs(a[i]-x) > abs(a[i+1]-x) )
        {
            if(a[i]>a[i+1])
            return 1;
            
            else if(a[i]<a[i+1])
            return 2;
        }
    }
    
    return 0;
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
        
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        ll l=0;
        ll r=1e9;
        
        ll ans = -1;
        
        
        while(l<=r)
        {
            ll mid = (l+r)/2;
            
            
            if(check(mid,a,n)==1)
            {
                l = mid+1;
            }
            else if(check(mid,a,n)==2)
            {
                r = mid-1;
            }
            else{
                ans = mid;
                break;
            }
        }
        
        cout<<ans<<endl;
    }
}
