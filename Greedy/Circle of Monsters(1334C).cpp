#include <bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{
    ios_base :: sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n;
        cin>>n;
        
        pair<ll,ll>a[n];
        ll sum = 0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i].first>>a[i].second;
            sum += a[i].first;
        }
        
        ll ans[n];
        
        for(ll i=0;i<n;i++)
        {
            if(i==0)
            {
                ans[i] = a[i].first-a[n-1].second;
            }
            
            else{
                ans[i] = a[i].first-a[i-1].second;
            }
        }
        
       ll prefix=0;
       
       for(ll i=0;i<n;i++)
       {
           if(ans[i]>0)
           prefix+=ans[i];
       }
        
       
        
        ll result = sum;
        
        for(ll i=0;i<n;i++)
        {
            ll val=0;
            if(ans[i]>0)
            val = ans[i];
            
            result = min(result,prefix-val+a[i].first);
        }
        
        cout<<result<<endl;
        
    }
}
