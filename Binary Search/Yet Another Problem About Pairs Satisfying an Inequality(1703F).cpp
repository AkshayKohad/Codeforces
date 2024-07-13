#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll search(vector<ll>&indexes,ll val,ll n)
{
    ll l=0;
    ll r=n;
    
    while(l<=r)
    {
        ll mid = (l+r)/2;
        
        if(indexes[mid]>=val)
        {
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    
    
    if(r>=0 && indexes[r]>=val)
    {
        r--;
    }
    
    
    return r+1;
}
int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n;
        cin>>n;
        
        vector<ll>a(n+1);
        
        vector<ll>indexes;
        
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
            
            if(i>a[i])
            {
                indexes.push_back(i);
            }
        }
       
     
        ll ans = 0;
        ll sz = indexes.size();
        
        for(ll i=sz-1;i>=1;i--)
        {
            ll cnt = search(indexes,a[indexes[i]],i-1);
            
            ans += cnt;
        }
        
        cout<<ans<<"\n";
    }
    
}
