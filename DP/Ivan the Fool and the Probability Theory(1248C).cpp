#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

#define ll long long


ll solve(ll i,ll &n,ll prev_prev_status,ll prev_status,vector<vector<vector<ll>>>&memo)
{
    
    if(i>=n)return 1;
    
    if(memo[i][prev_prev_status][prev_status] !=-1)
    return memo[i][prev_prev_status][prev_status];
    
    
    if(prev_prev_status==0 || prev_status==0)
    {
        return memo[i][prev_prev_status][prev_status] = (solve(i+1,n,prev_status,1,memo) + solve(i+1,n,prev_status,2,memo))%mod;
       
    }
    
    if(prev_prev_status==prev_status)
    {
        if(prev_status==1)
        {
            return memo[i][prev_prev_status][prev_status] = (solve(i+1,n,prev_status,2,memo)%mod);
          
        }
        else{
            return memo[i][prev_prev_status][prev_status] =  (solve(i+1,n,prev_status,1,memo)%mod);
          
        }
    }
    
    else{
        return memo[i][prev_prev_status][prev_status] =  (solve(i+1,n,prev_status,1,memo) + solve(i+1,n,prev_status,2,memo))%mod;
        
    }

  return 0;
}
int main()
{
   ll n,m;
   cin>>n>>m;
   
   vector<vector<vector<ll>>>memo(n+1,vector<vector<ll>>(3,vector<ll>(3,-1)));
   vector<vector<vector<ll>>>memo1(m+1,vector<vector<ll>>(3,vector<ll>(3,-1)));
   
   cout<<((solve(0,n,0,0,memo) + solve(0,m,0,0,memo1))%mod -2 + mod)%mod;
}
