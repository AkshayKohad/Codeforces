#include <bits/stdc++.h>
using namespace std;

#define mod 998244353
#define ll long long

ll power(ll base,ll expo)
{
   if(expo==0)
   return 1;
   
   if(expo==1)
   return base;
   
   if(expo%2==0)
   {
       ll ans = power(base,expo/2);
       
       ans = (ans*ans)%mod;
       
       return ans;
   }
   
   ll ans = power(base,(expo-1)/2);
  
   ans = (ans*ans)%mod;
   
   ans = (ans*base)%mod;
   
   return ans;
}

int main()
{
    ll n;
    cin>>n;
    
    vector<ll>a(n);
    vector<ll>b(n);
    
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(ll i=0;i<n;i++)
    {
        cin>>b[i];
    }
    
    ll m;
    cin>>m;
    
    vector<ll>c(m);
    vector<ll>d(m);
    
    
    for(ll i=0;i<m;i++)
    {
        cin>>c[i];
    }
    
    for(ll i=0;i<m;i++)
    {
        cin>>d[i];
    }
    
    
    unordered_map<ll,ll>mp;
    
    for(ll i=0;i<n;i++)
    {
        mp[a[i]]=b[i];
    }
    
    for(ll i=0;i<m;i++)
    {
        if(mp.find(c[i])==mp.end())
        {
            cout<<"0";
            return 0;
        }
        
        if(mp[c[i]]<d[i])
        {
            cout<<"0";
            return 0;
        }
        
        else
        {
            mp[c[i]] -= d[i];
            
            if(mp[c[i]]==0)
            mp.erase(c[i]);
        }
    }
    
    ll expo = mp.size();
    //cout<<expo<<endl;
    cout<<power(2,expo);
}
