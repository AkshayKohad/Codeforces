#include <bits/stdc++.h>
using namespace std;

#define ll long long


ll solve(ll i,vector<string>&a,vector<string>&a_rev,vector<ll>&c,ll &n,ll status,vector<vector<ll>>&memo)
{
  if(i==n)
  return 0;
  
  
  if(memo[i][status]!=-1)
  return memo[i][status];
  
  if(i==0)
  {
      ll ans = solve(i+1,a,a_rev,c,n,0,memo);
      ll ans1 = solve(i+1,a,a_rev,c,n,1,memo);
      
      if(ans1==LLONG_MAX && ans==LLONG_MAX)
      {
          return memo[i][status] = LLONG_MAX;
      }
      else if(ans1==LLONG_MAX)
      {
         return memo[i][status] = ans;
      }
      else if(ans==LLONG_MAX)
      {
          return memo[i][status] = ans1 + c[i];
      }
      else{
          return memo[i][status] = min(ans,ans1+c[i]);
      }
  }
  
  else{
      if(status==0)
      {
          ll res = LLONG_MAX;
          
          if(a[i-1]<=a[i])
          {
              ll ans = solve(i+1,a,a_rev,c,n,0,memo);
              
              if(ans!=LLONG_MAX)
              res = min(ans,res);
          }
          
          if(a[i-1]<=a_rev[i])
          {
              ll ans1 = solve(i+1,a,a_rev,c,n,1,memo);
              
              if(ans1!=LLONG_MAX)
              {
                  res = min(res,ans1+c[i]);
              }
          }
          
          return memo[i][status] = res;
      }
      else{
          
          ll res = LLONG_MAX;
          
          if(a_rev[i-1]<=a[i])
          {
              ll ans = solve(i+1,a,a_rev,c,n,0,memo);
              
              if(ans!=LLONG_MAX)
              res = min(ans,res);
          }
          
          if(a_rev[i-1]<=a_rev[i])
          {
              ll ans1 = solve(i+1,a,a_rev,c,n,1,memo);
              
              if(ans1!=LLONG_MAX)
              {
                  res = min(res,ans1+c[i]);
              }
          }
          
          return memo[i][status] = res;
      }
  }
  
  return memo[i][status] = -1;
}

int main()
{
    ios_base :: sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n;
    cin>>n;
    
    vector<ll>c(n);
    
    for(ll i=0;i<n;i++)
    {
        cin>>c[i];
    }
    
    vector<string>a(n);
    vector<string>a_rev(n);
    
    for(ll i=0;i<n;i++)
    {
        string s;
        cin>>s;
        
        a[i] = s;
        reverse(s.begin(),s.end());
        a_rev[i] = s;
    }
    
    vector<vector<ll>>memo(n,vector<ll>(2,-1));
    ll result = solve(0,a,a_rev,c,n,0,memo);
    
    if(result==LLONG_MAX)
    cout<<"-1"<<endl;
    
    else
    cout<<result<<endl;
}
