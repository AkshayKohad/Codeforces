#include <bits/stdc++.h>
using namespace std;

#define ll long long 

bool AllZeores(vector<ll>&a)
{
    ll n = a.size();
    
    for(ll i=0;i<n;i++)
    {
       if(a[i]!=0)
       return false;
    }
    
    return true;
}

int main()
{
    ll n;
    cin>>n;
    
    if(n==1 || n==2)
    {
        cout<<"0";
        return 0;
        
    }
    
    
    vector<ll>a(n);
  
    for(ll i=0;i<n;i++)
    {
    cin>>a[i];
    
    }
    
    
    if(AllZeores(a))
    {
        cout<<(n-1)*(n-2)/2;
        return 0;
    }
    
    vector<ll>prefix_sum(n);
    
    prefix_sum[0] = a[0];
    
      ll sum = 0;
      
    for(ll i=1;i<n;i++)
    {
        prefix_sum[i] =prefix_sum[i-1]+a[i];
    }
     sum = prefix_sum[n-1];
     
     if(sum%3!=0)
     {
         cout<<"0";
         return 0;
     }
    unordered_map<ll,ll>mp;
    
    
    ll partition_sum = sum/3;
    
  
    ll ans = 0;
    
    ll i=0;
    
    for(i=0;i<n;i++)
    {
       if(prefix_sum[i]==partition_sum)
       break;
    }
    
    mp[partition_sum]++;
    //cout<<i<<endl;
    i++;
    
    bool isfirst_partition = false;
    for(;i<n-1;i++)
    {
        if(mp.find(prefix_sum[i]-partition_sum) != mp.end())
        {
            
            if((prefix_sum[n-1]-prefix_sum[i]==partition_sum))
            ans += mp[prefix_sum[i]-partition_sum];
        }
        
       
        
              mp[prefix_sum[i]]++;
    }
    
    cout<<ans;
}
