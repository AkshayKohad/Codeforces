#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(ll i,vector<ll>&a,ll &n,vector<ll>&memo)
{
    if(i==n)
    {
        return 0;
    }
    
    if(memo[i]!=-1)
    return memo[i];
    
    
    if(i+a[i]>=n)
    {
        return memo[i] = 1+solve(i+1,a,n,memo);
    }
    
    else{
        return memo[i] = min(solve(i+a[i]+1,a,n,memo),1+solve(i+1,a,n,memo));
    }
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
     
     vector<ll>memo(n+1,-1);
     cout<<solve(0,a,n,memo)<<endl;
 }
 
}
