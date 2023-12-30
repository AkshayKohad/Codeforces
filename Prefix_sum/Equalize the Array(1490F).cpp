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
        
        sort(a.begin(),a.end());
        
        
        vector<ll>freq(n+1,0);
        
        ll i=0;
        
        while(i<n)
        {
            ll cnt = 0;
            ll j=i;
            while(i<n && a[j]==a[i])
            {
                i++;
                cnt++;
            }
            
            freq[cnt]++;
        }
        
        vector<ll>total_elements(n+1,0);
        
        for(ll i=0;i<=n;i++)
        {
            total_elements[i] = i*freq[i];
        }
        
        
        // for(ll i=0;i<=n;i++)
        // {
        //     cout<<freq[i]<<" ";
        // }
        // cout<<endl;
        
        
        
        // for(ll i=0;i<=n;i++)
        // {
        //     cout<<total_elements[i]<<" ";
        // }
        // cout<<endl;
        
        
        for(ll i=1;i<=n;i++)
        {
            total_elements[i] += total_elements[i-1];
            freq[i] += freq[i-1];
        }
        
        ll result = total_elements[n];
        
        for(ll i=1;i<=n;i++)
        {
            ll val_left = total_elements[i-1];
            
            ll val_right = total_elements[n]-total_elements[i]-(freq[n]-freq[i])*i;
            
            ll val_res = val_left+val_right;
            result = min(result,val_res);
            
         //   cout<<i<<" "<<val_res<<endl;
        }
        
        cout<<result<<endl;
        
    }
}
