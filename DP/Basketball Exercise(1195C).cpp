#include <bits/stdc++.h>
using namespace std;


#define ll long long

ll solve(ll i,ll prev_row,vector<ll>&a,vector<ll>&b,ll &n,vector<vector<ll>>&memo)
{
    if(i==n)
    return 0;
    
    if(memo[i][prev_row]!=-1)
    return memo[i][prev_row];
    
    if(prev_row==0)
    {
        return memo[i][prev_row] = max(a[i]+solve(i+1,2,a,b,n,memo),b[i]+solve(i+1,1,a,b,n,memo));
    }
    
    if(prev_row==1)
    {
        ll ans1 = a[i]+solve(i+1,2,a,b,n,memo);
        ll ans2 = 0;
        if(i+1<n)
        {
           ans2 =  a[i+1]+solve(i+2,2,a,b,n,memo);
        }
        
        return memo[i][prev_row] = max(ans1,ans2);
    }
    else if(prev_row==2)
    {
         ll ans1 = b[i]+solve(i+1,1,a,b,n,memo);
        ll ans2 = 0;
        if(i+1<n)
        {
           ans2 = b[i+1]+solve(i+2,1,a,b,n,memo);
        }
        
        return memo[i][prev_row] =  max(ans1,ans2);
    }
    
    return 0;
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
    
    vector<vector<ll>>memo(n+1,vector<ll>(3,-1));
    cout<<solve(0,0,a,b,n,memo);
}
