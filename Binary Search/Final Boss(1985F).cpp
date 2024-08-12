#include <bits/stdc++.h>
using namespace std;

#define ll long long


bool check(ll mid,vector<ll>a,vector<ll>c,ll h,ll n)
{
    ll sum = 0;
    
    for(ll i=0;i<n;i++)
    {
        ll divi = mid/c[i];
        
        sum += a[i]*divi;
    }
    
    if(sum>=h)
    return true;
    
    return false;
}
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        ll h,n;
        cin>>h>>n;
        
        vector<ll>a(n);
        vector<ll>c(n);
        
        ll sum = 0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum +=a[i];
        }
        
        
        for(ll i=0;i<n;i++)
        {
            cin>>c[i];
        }
        
        
        if(sum>=h)
        {
            cout<<"1\n";
            continue;
        }
        
        h = h-sum;
        
        ll l=1;
        ll r=1e11;
        
        ll ans = -1;
        
        while(l<=r)
        {
            ll mid = (l+r)/2;
            
            
            if(check(mid,a,c,h,n))
            {
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
            
        }
        
        cout<<ans+1<<"\n";
           
    }
}
