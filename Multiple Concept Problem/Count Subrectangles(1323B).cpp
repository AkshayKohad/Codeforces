// Prefix_sum + Mathematics(finding factors)


#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    
    vector<ll>a(n);
    vector<ll>b(m);
    
    for(ll i=0;i<n;i++)
    cin>>a[i];
    
    for(ll j=0;j<m;j++)
    cin>>b[j];
    
    vector<ll>k_factors;
    
    for(ll i=1;i*i<=k;i++)
    {
        if(k%i==0)
        {
            k_factors.push_back(i);
            
            if(k/i != i)
            k_factors.push_back(k/i);
        }
    }
    
    sort(k_factors.begin(),k_factors.end());
    
    
    
    vector<ll>cnt_a(n+1,0);
    
    vector<ll>cnt_b(m+1,0);
    
    ll sum = 0;
    
    for(ll i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            ll val = 1;
            ll j=0;
            while(j<k_factors.size() && k_factors[j]<=sum)
            {
                cnt_a[k_factors[j]] += sum-k_factors[j]+1;
                j++;
            }
            
            sum=0;
        }
        else{
            sum++;
        }
    }
    
    ll j=0;
    while(j<k_factors.size() && k_factors[j]<=sum)
    {
        cnt_a[k_factors[j]] += sum-k_factors[j]+1;
        j++;
    }
            
    sum=0;
    
    for(ll i=0;i<m;i++)
    {
        if(b[i]==0)
        {
            ll val = 1;
            ll j=0;
            while(j<k_factors.size() && k_factors[j]<=sum)
            {
                cnt_b[k_factors[j]] += sum-k_factors[j]+1;
                j++;
            }
            
            sum=0;
        }
        else{
            sum++;
        }
    }
    
    j=0;
    
    while(j<k_factors.size() && k_factors[j]<=sum)
    {
        cnt_b[k_factors[j]] += sum-k_factors[j]+1;
        j++;
    }
            
    sum=0;
    
    ll ans = 0;
    for(ll i=0;i<k_factors.size();i++)
    {
        ll val = k_factors[i];
        ll val2 = k/k_factors[i];
        
        if(val<=n && val2<=m)
        ans += cnt_a[val]*cnt_b[val2];
    }
    
    
    cout<<ans<<endl;
}
