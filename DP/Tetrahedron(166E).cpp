#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


// ll solve(ll n,ll position,vector<vector<ll>>&memo)
// {
//     if(n==0)
//     {
//         if(position==1)
//         return 1;
        
//         return 0;
//     }
    
//     if(memo[n][position]!=-1)
//     return memo[n][position];
    
    
//     ll res = 0;
    
//     //top position so from top can go to any of the 3 bottom vertices
//     if(position==1)
//     {
//       return memo[n][position] = 3*solve(n-1,0,memo)%mod;        
//     }
    
//     //bottom position so from top it can either go top or 2 bottom positions
//     else if(position==0)
//     {
//         return memo[n][position] = (2*solve(n-1,0,memo) + solve(n-1,1,memo))%mod;
//     }
    
//     return 0;
// }


int main()
{
    ll n;
    cin>>n;
    

    ll prev_0 = 0;
    ll prev_1 = 1;
    ll cur_1 = 0;
    ll cur_0 = 0;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=0;j<2;j++)
        {
            
            
            if(j==1)
            {
                cur_1 = 3*prev_0%mod;
                
               
            }
            else{
                cur_0 = (2*prev_0 + prev_1)%mod;
                
              
            }
        }
          prev_1  = cur_1;
            prev_0 = cur_0;
    }
    
    cout<<prev_1;
}
