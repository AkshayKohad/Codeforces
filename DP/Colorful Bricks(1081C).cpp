#include <bits/stdc++.h>
using namespace std;

#define mod 998244353
 
#define ll long long

ll solve(ll i,ll k,ll &n,ll &m,vector<vector<ll>>&memo)
{
    if(i==n && k==0)
    return 1;

    else if(i==n && k>0)
     return 0;

   if(memo[i][k]!=-1)
   return memo[i][k];


     if(i==0)
     {
        return memo[i][k] = m*solve(i+1,k,n,m,memo)%mod;
     }
     if(k>0)
     {
        return memo[i][k] = (solve(i+1,k,n,m,memo) + (m-1)*(solve(i+1,k-1,n,m,memo)))%mod;
     }
     else{
        return memo[i][k] = solve(i+1,k,n,m,memo)%mod;
     }

}
int main()
{
   ll t=1;

   while(t--)
   {
      ll n,m,k;
      cin>>n>>m>>k;
       

      vector<vector<ll>>memo(n,vector<ll>(k+1,-1)); 
      cout<<solve(0,k,n,m,memo)<<"\n";


   }
}
 
