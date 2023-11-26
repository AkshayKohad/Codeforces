#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


ll solve(ll n,ll &k,vector<ll>&memo)
{
    if(n==0) return 1;
    
    if(n<0) return 0;
    
    if(memo[n]!=-1)return memo[n];
    
    
    return  memo[n] =  (solve(n-1,k,memo) + solve(n-k,k,memo))%mod;
    
}

int main()
{
    ll t,k;
    cin>>t>>k;
     vector<pair<ll,ll>>q;
     ll maxi = -1;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        
        q.push_back({a,b});
        
        maxi = max({maxi,a,b});
    }
    
    ll n = maxi;
    
    vector<ll>memo(n+1,-1);
    solve(n,k,memo);
    
    vector<ll>prefix(n+1,0);
    
    for(ll i=1;i<=n;i++)
    {
        prefix[i] = prefix[i-1] + memo[i];
    }
     //cout<<memo[n-1]<<endl;
     
    for(ll i=0;i<q.size();i++)
    {
        ll s = q[i].first;
        ll e = q[i].second;
        
        cout<<(prefix[e]-prefix[s-1]+mod)%mod<<endl;
    }
}
