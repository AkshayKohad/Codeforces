#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n,q;
    cin>>n>>q;
    
    vector<ll>a(n);
    
   
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    vector<ll>prefix_sum(n+2,0);
    
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        
        prefix_sum[l]+=1;
        prefix_sum[r+1]-=1;
    }
    
    for(ll i=1;i<=n;i++)
    {
        prefix_sum[i] = prefix_sum[i]+prefix_sum[i-1];
     //   cout<<prefix_sum[i]<<" ";
    }
    //cout<<endl;
    
    vector<int>freq;
    
    for(ll i=1;i<=n;i++)
    {
        freq.push_back(prefix_sum[i]);
    }
    
    sort(freq.begin(),freq.end());
    
    sort(a.begin(),a.end());
    
    ll res = 0;
    
    for(ll i=0;i<n;i++)
    {
        res = res + a[i]*freq[i];
    }
    
    cout<<res;
    
    
    
}
