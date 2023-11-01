#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(ll i,ll &m,vector<ll>&res,unordered_map<ll,ll>&mp,vector<ll>&memo)
{
    if(i>=m)
    return 0;
    
    
    if(memo[i]!=-1)
    return memo[i];
    
    
    ll res2 = mp[res[i]]*res[i];
    
    if(i+1<m)
    {
      if(res[i+1]==res[i]+1)
      {
          res2 += solve(i+2,m,res,mp,memo);
      }
      else{
          res2 += solve(i+1,m,res,mp,memo);
      }
    }
    
    ll res1 = solve(i+1,m,res,mp,memo);
    
    //cout<<res2<<" "<<res1<<endl;
    return memo[i] = max(res2,res1);
    
}

int main()
{
    ll n;
    cin>>n;
    
    vector<ll>a(n);
    unordered_map<ll,ll>mp;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    
    vector<ll>res;
    for(auto k:mp)
    {
        res.push_back(k.first);
    }
    
    sort(res.begin(),res.end());
    ll m = res.size();
    
    vector<ll>memo(n+1,-1);
   cout<< solve(0,m,res,mp,memo);

    
}
