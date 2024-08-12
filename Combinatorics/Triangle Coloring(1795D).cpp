#include <bits/stdc++.h>
 
using namespace std;

#define MOD 998244353

#define ll long long

ll fact(ll val)
{
    ll res = 1;
    
    for(ll i=1;i<=val;i++)
    {
        res = (res*i)%MOD;
    }
    
    return res;
}

ll power(ll x,ll y)
{
    if(y==0)
    return 1;
    
    if(y==1)
    return x;
    
    
    if(y%2==0)
    {
        ll ans = power(x,y/2);
        
        return (ans*ans)%MOD;
    }
    
    ll ans = power(x,(y-1)/2);
    
    ans = (ans*ans)%MOD;
    
    return (ans*x)%MOD;
}
int main()
{
    ll n;
    cin>>n;
    
    vector<ll>weights(n);
    for(ll i=0;i<n;i++)
    cin>>weights[i];
    
    ll inverse_val = 1;
    
    for(ll i=1;i<=n/6;i++)
    {
        inverse_val = (inverse_val*power(i,MOD-2))%MOD;
    }
    ll val = fact(n/3);
  //  cout<<val<<endl;
   // cout<<inverse_val<<endl;
    ll res = (((val*inverse_val)%MOD)*inverse_val)%MOD;
   // cout<<res<<endl;
    ll i=0;
    
    while(i<n)
    {
        ll first = weights[i];
        ll second = weights[i+1];
        ll third = weights[i+2];
        
        vector<ll>temp;
        
        temp.push_back(first);
        temp.push_back(second);
        temp.push_back(third);
        
        sort(temp.begin(),temp.end());
        
        ll mn = *min_element(temp.begin(), temp.end());
        ll cnt_min = count(temp.begin(), temp.end(), mn);
        res = (res*cnt_min)%MOD;
        
        
        i=i+3;
    }
    
    cout<<res<<"\n";
}
