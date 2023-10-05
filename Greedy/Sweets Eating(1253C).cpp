#include <bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{
    ll n,m;
    cin>>n>>m;
    
    vector<ll>a(n);
    
    for(ll i=0;i<n;i++)
    cin>>a[i];
    
    sort(a.begin(),a.end());
    
    vector<ll>prefix_sum(n);
    prefix_sum[0] = a[0];
    
    for(ll i=1;i<n;i++)
    {
        prefix_sum[i] = prefix_sum[i-1]+a[i];
    }
    
    vector<ll>ans(n);
    
    for(ll i=0;i<n;i++)
    {
        if(i-m>=0)
        {
            ans[i] = ans[i-m] + prefix_sum[i];
        }
        else{
            ans[i] = prefix_sum[i];
        }
    }
    
    for(ll i=0;i<n;i++)
    cout<<ans[i]<<" ";
    
    
}
