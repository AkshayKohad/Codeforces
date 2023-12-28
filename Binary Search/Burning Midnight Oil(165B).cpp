#include <bits/stdc++.h>
using namespace std;

#define ll long long


bool check(ll val,ll n,ll k)
{
    ll pow_limit = log2(val)/log2(k);
    
    pow_limit++;
    
    // if(val==4)
    // cout<<pow_limit<<endl;
    
    
    
    ll deno = k;
    ll res = val;
    for(ll i=1;i<=pow_limit;i++)
    {
        res = res + val/deno;
        deno = deno*k;
    }
    // if(val==4)
    // cout<<res<<endl;
    
    if(res>=n)
    return true;
    
    return false;
}


int main()
{
    ll n,k;
    cin>>n>>k;
    
    ll l=1;
    ll r = 10000000000;
    
    ll ans = -1;
    
    while(l<=r)
    {
        ll mid = (l+r)/2;
        
        // if(mid==4)
        // cout<<mid<<endl;
        
        if(check(mid,n,k))
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
