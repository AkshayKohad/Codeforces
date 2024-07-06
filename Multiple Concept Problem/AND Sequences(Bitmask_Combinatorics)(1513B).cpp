#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define mod 1000000007


ll fact(ll n)
{
    if(n<=1)
    return 1;
    
    ll ans=1;
    
    for(ll i=2;i<=n;i++)
    {
        ans = (ans*i)%mod;
    }
    
    return ans;
}
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
    
    ll cnt_min = 0;
    ll mini = a[0];
    
    for(ll i=0;i<n;i++)
    {
        if(mini==a[i])
        cnt_min++;
        
        else
        break;
    }
    
    if(cnt_min<2)
    {
        cout<<"0\n";
        continue;
    }
    
    swap(a[1],a[n-1]);
    
    vector<ll>prefix_and(n);
    vector<ll>suffix_and(n);
    
    prefix_and[0] = a[0];
    suffix_and[n-1] = a[n-1];
    
    for(ll i=1;i<n;i++)
    {
        prefix_and[i] = prefix_and[i-1]&a[i];
    }
    
    for(ll i=n-2;i>=0;i--)
    {
        suffix_and[i] = suffix_and[i+1]&a[i];
    }
    
    ll flag=1;
    for(ll i=0;i<n-1;i++)
    {
        if(prefix_and[i]!=suffix_and[i+1])
        {
            flag=0;
            cout<<"0\n";
            break;
        }
    }
    
    if(flag==1)
    {
        // answer is ((cnt_minC2)*2)*(n-2)!
        
        ll ans = ((cnt_min)*(cnt_min-1))%mod;
        
        ans = (ans*fact(n-2))%mod;
        
        cout<<ans<<"\n";
    }
    
    
   }
}
