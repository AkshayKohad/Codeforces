#include <bits/stdc++.h>
using namespace std;


#define ll long long

ll solve(ll i,vector<ll>&next_element,ll &n,vector<ll>&a,vector<vector<ll>>&memo,ll jump)
{
    if(i>=n)
    return 0;
    
    if(memo[i][jump]!=-1)
    return memo[i][jump];
    
    
    ll res = 0;
    
    ll res2 = 0;
    if(next_element[i]!=-1)
    {
        ll val=0;
        
        if(jump==0)
        val = next_element[i]-i+1;
        
        else{
            val = next_element[i]-i;
        }
        
        res = val + solve(next_element[i],next_element,n,a,memo,1);
        
        
    }
    
        res2 = solve(i+1,next_element,n,a,memo,0);
        return memo[i][jump] = max(res,res2);
    
    return 0;
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
      
      unordered_map<ll,ll>mp;
     
      
      vector<ll>next_element(n,-1);
     
      for(ll i=n-1;i>=0;i--)
      {
          if(mp.find(a[i])==mp.end())
          {
              next_element[i] = -1;
          }
          else{
              next_element[i] = mp[a[i]];
          }
          mp[a[i]] = i;
          
      }
      
      vector<vector<ll>>memo(n+1,vector<ll>(2,-1));
      cout<<solve(0,next_element,n,a,memo,0)<<endl;
     
  }
}
