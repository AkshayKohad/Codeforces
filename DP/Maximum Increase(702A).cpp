#include <bits/stdc++.h>
using namespace std;

#define ll long long 


int main()
{
    ll n;
    cin>>n;
    
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    
   vector<ll>dp(n,1);
   
   for(int i=0;i<n-1;i++)
   {
       if(a[i]<a[i+1])
       dp[i+1] = dp[i]+1;
   }
   
   ll result = 0;
   
   for(int i=0;i<n;i++)
   result = max(result,dp[i]);
   
   cout<<result;
   
}
