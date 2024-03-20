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
        cin>>a[i];
        
        ll l=0;
        ll r=1e9;
        
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            continue;
            
            if(a[i]<a[i+1])
            {
                ll x = (a[i]+a[i+1])/2;
                
                r = min(r,x);
            }
            else if(a[i]>a[i+1]){
                ll x = (a[i]+a[i+1]+1)/2;
                
                l = max(l,x);
            }
        }
        
        if(r>=l)
        {
            cout<<r<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}
