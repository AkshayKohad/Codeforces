#include <bits/stdc++.h>
using namespace std;

#define ll long long


bool check(ll &k,vector<ll>a,ll &s, ll &n)
{
    for(ll i=0;i<n;i++)
    {
        a[i] = a[i] + (i+1)*k;
    }
    
    sort(a.begin(),a.end());
    
    ll res = 0;
    
    for(ll i=0;i<k;i++)
    {
        res += a[i];
    }
    
    if(res<=s)
    return true;
    
    return false;
}




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n,s;
    cin>>n>>s;
    
   
    
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    
    ll l=0;
    
    ll r = n;
    
    ll ans = -1;
    
    while(l<=r)
    {
        ll mid = (l+r)/2;
        
        if(check(mid,a,s,n))
        {
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    
    cout<<ans<<" ";
    
    for(ll i=0;i<n;i++)
    {
        a[i] = a[i] + (i+1)*ans;
    }
    
    sort(a.begin(),a.end());
    
    ll res = 0;
    
    for(ll i=0;i<ans;i++)
    {
        res += a[i];
    }
    
    cout<<res<<endl;
}
