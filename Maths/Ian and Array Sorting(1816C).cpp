#include <bits/stdc++.h>
using namespace std;

#define ll long long

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
        
        if(n%2==1)
        {
            cout<<"YES\n";
            continue;
        }
        
        for(ll i=0;i<n-2;i++)
        {
            ll diff = a[i]-a[i+1];
            
            a[i+1] += diff;
            a[i+2] += diff;
        }
        
        if(a[n-1]>=a[n-2])
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
}
