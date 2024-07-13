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
        
        ll ans = 0;
        
        for(ll i=30;i>=0;i--)
        {
            ll cnt = 0;
            
            for(ll j=0;j<n;j++)
            {
                ll bit = (a[j]&(1<<i));
                
                if(bit==0)
                {
                    cnt++;
                }
            }
            
            if(cnt<=k)
            {
                k = k-cnt;
                
                ans += (1<<i);
            }
        }
        
        cout<<ans<<"\n";
    }
}
