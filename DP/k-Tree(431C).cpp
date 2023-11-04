#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007

ll solve(ll n,ll &k,ll &d,ll weight_present,vector<vector<ll>>&memo)
{
    if(n==0 && weight_present==1)
    {
        return 1;
    }
    if(n==0)
    {
        return 0;
    }
    
    if(memo[n][weight_present]!=-1)
    return memo[n][weight_present];
    
    ll res = 0;
    for(ll i=1;i<=k;i++)
    {
        if(n>=i)
        {
        
        if(i>=d || weight_present==1)
        res = (res + solve(n-i,k,d,1,memo))%mod;
        
        else{
            res = (res + solve(n-i,k,d,0,memo))%mod;
        }
        }
    }
    
    return memo[n][weight_present] = res;
}
int main()
{
    ll n,k,d;
    cin>>n>>k>>d;
    
    vector<vector<ll>>memo(n+1,vector<ll>(2,-1));
    cout<<solve(n,k,d,0,memo);
}
