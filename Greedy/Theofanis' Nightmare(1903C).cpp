#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

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
        
        ll sum=0;
        
        vector<ll>segments_sum;
        
       // ll j=n-1;
        
        vector<ll>suffix(n);
        
        suffix[0] = a[n-1];
        
        for(ll i=n-2;i>=0;i--)
        {
            suffix[n-1-i] += suffix[n-1-i-1] + a[i];
        }
        ll j=0;
        
        while(j<n)
        {
            ll i=j;
            
            
             while(i<n && suffix[i]<=0)
             {
                i++;
             }
             
            ll temp_sum;
            
            if(i<n) 
            temp_sum = suffix[i]-suffix[j]+a[n-1-j];
            
            else
            temp_sum = suffix[n-1]-suffix[j]+a[n-1-j];
            
            segments_sum.push_back(temp_sum);
            
            j=i;
            
            j++;
            
            
        }
        
        reverse(segments_sum.begin(),segments_sum.end());
        
        ll ans = 0;
        
        for(ll i=0;i<segments_sum.size();i++)
        {
            ans += (i+1)*(segments_sum[i]);
        }
        
        cout<<ans<<"\n";
    }
}
