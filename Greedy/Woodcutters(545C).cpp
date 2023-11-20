#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    
    if(n==1 || n==2)
    {
       cout<<n;
       return 0;
    }
    vector<pair<ll,ll>>a(n);
    
    for(ll i=0;i<n;i++)
    {
        ll x,h;
        cin>>x>>h;
        
        a[i] = {x,h};
    }
    
    ll left = a[0].first;
    ll cnt = 2;
    
    for(ll i=1;i<n-1;i++)
    {
        ll val = a[i].first - a[i].second;
        ll val1 = a[i].first + a[i].second;
        if(val>left && val > a[i-1].first)
        {
            left = a[i].first;
            cnt++;
        }
        
        
        else if(a[i+1].first > val1)
        {
            left = val1;
            cnt++;
       
        }
    }
    
    cout<<cnt;
}
