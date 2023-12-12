#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        
        vector<ll>a(n);
        
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        vector<ll>w(k);
        
        for(ll i=0;i<k;i++)
        {
            cin>>w[i];
        }
        
        sort(a.begin(),a.end());
        sort(w.begin(),w.end());
        
        ll result = 0;
        
        ll i=0;
        ll j = n-1;
        while(i<k)
        {
            if(w[i]>1)
            break;
            
            result += 2*a[j];
            j--;
            i++;
        }
        
        ll l=n-1-k;
        ll r=j;
        
        while(i<k)
        {
            ll val = w[i];
            
            result += a[r]+a[l-val+2];
            
            l = l-val+1;
            r = r-1;
            i++;
        }
        
        cout<<result<<endl;
    }
}
