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
        
        vector<ll>freq(n+1,0);
        
        vector<ll>a(n);
        
        for(ll i=0;i<n;i++)
        cin>>a[i];
        
        vector<ll>b(n);
        
        for(ll i=0;i<n;i++)
        cin>>b[i];
        
        vector<ll>prefix(n,0);
        
        prefix[0] = b[0];
        
        for(ll i=1;i<n;i++)
        {
            prefix[i] = b[i] + prefix[i-1];
        }
        
        ll res = 0;
        
        vector<ll>result(n,0);
        for(ll i=0;i<n;i++)
        {
            ll val = a[i]+res;
            
            std::vector<ll>::iterator up; 
      
            up = std::upper_bound(prefix.begin(), prefix.end(), val);
            
            ll index = (up - prefix.begin());
            
            if(index==0)
            {
                result[index] += val;
            }
            else if(index==n)
            {
                // use to keep record of how many times it is fully drink b[i]
                freq[i]+=1;
                freq[n]-=1;
            }
            else{
                freq[i]+=1;
                freq[index]-=1;
                
                ll net_val = val-prefix[index-1];
                
                // partial addtion will be done to index which cannot drink b[i] limit completely 
                result[index]+= net_val;
                
                
            }
            
        // this is added to avoid the element which is already used and negect the effect in prefix array while checking upper_bound
            res += b[i];
        }
        
        // to get all frequency of completely drink b[i] by ith person
        for(ll i=1;i<=n;i++)
        {
            freq[i]+=freq[i-1];
        }
        
        for(ll i=0;i<n;i++)
        {
            result[i] = result[i] + freq[i]*b[i];
        }
        
        for(ll i=0;i<n;i++)
        {
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
}
