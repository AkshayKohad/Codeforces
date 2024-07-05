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
    
    if(n>m)
    {
        cout<<"0";
        return 0;
    }
    
    ll ans = 1;
    
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            ans = (ans*abs(a[i]-a[j]))%m;
        }
    }
    
    cout<<ans;
    
    return 0;
    
}
