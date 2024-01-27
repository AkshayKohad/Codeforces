#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

ll fact(ll val)
{
    ll ans = 1;
    
    for(ll i=1;i<=val;i++)
    {
        ans = (ans*i)%mod;
    }
    
    return ans;
}

ll power(ll base,ll n)
{
    if(n==0)
    return 1;
    
    if(n==1)
    return base%mod;
    
    if(n%2==0)
    {
        ll ans = power(base,n/2);
        
        return (ans*ans)%mod;
    }
    else{
        
        ll ans = power(base,(n-1)/2);
        
        ans = (ans*ans)%mod;
        
        return (ans*base)%mod;
    }
    
    return 0;
}
int main()
{
    ll n;
    cin>>n;
    
    ll result = 0;
    
    
    ll res = fact(n);
      
    ll pow_res = power(2,n-1);
        
    result = (res-pow_res+mod)%mod;
    
    
    cout<<result<<endl;
    
}
