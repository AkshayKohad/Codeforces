#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    
    vector<ll>a(n);
    
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    ll total = (n*(n+1))/2;
    
    for(ll i=0;i<n;i++)
    {
        if(a[i]>0)
        a[i]=1;
        
        else
        a[i]=-1;
    }
    
    map<ll,ll>mp;
    
    ll prefix_prod = 1;
    
    ll cnt_neg = 0;
    
    for(ll i=0;i<n;i++)
    {
        prefix_prod = prefix_prod*a[i];
        
        if(prefix_prod==-1)
        cnt_neg++;
        
        mp[prefix_prod]++;
        
        if(prefix_prod==-1)
        {
            cnt_neg += mp[1];
        }
        
        else{
            cnt_neg += mp[-1];
        }
    }
    
    
    cout<<cnt_neg<<" ";
    cout<<total-cnt_neg<<endl;
    
    
}
