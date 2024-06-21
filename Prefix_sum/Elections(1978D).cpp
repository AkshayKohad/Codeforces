#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,c;
        cin>>n>>c;
        
        vector<ll>a(n);
        
        
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        ll maxi = a[0];
        ll maxi_index = 0;
        
        for(ll i=1;i<n;i++)
        {
            if(maxi<a[i])
            {
                maxi = a[i];
                maxi_index=i;
            }
        }
        
        vector<ll>prefix_sum(n,0);
        
        prefix_sum[0] = a[0];
        
        for(ll i=1;i<n;i++)
        {
            prefix_sum[i] = prefix_sum[i-1]+a[i];
        }
        
        for(ll i=0;i<n;i++)
        {
            if(i==maxi_index)
            {
                if(a[i]>prefix_sum[0]+c)
                {
                    cout<<"0 ";
                }
                else{
                    cout<<i<<" ";
                }
            }
            else{
                ll val = prefix_sum[i]+c;
                ll res = i;
                
                if(val>=maxi)
                {
                    cout<<res<<" ";
                }
                else{
                    cout<<res+1<<" ";
                }
            }
        }
        
        cout<<"\n";
        
    }
}
