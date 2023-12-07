#include <bits/stdc++.h>
using namespace std;


#define ll long long 

int main()
{
  ll t;
  cin>>t;
  
  
  while(t--)
  {
      ll n;
      cin>>n;
      
      string s;
      cin>>s;
      
      vector<ll>prefix_sum(n,0);
      
      prefix_sum[0] = s[0]-'0';
      
      for(ll i=1;i<n;i++)
      {
          prefix_sum[i] += prefix_sum[i-1] + s[i]-'0';
      }
  
  
  unordered_map<ll,ll>mp;
  
  mp[0]=1;
  
  ll res = 0;
  for(ll i=0;i<n;i++)
  {
      ll val = prefix_sum[i] - (i+1);
      
      if(mp.find(val)!=mp.end())
      res = res + mp[val];
      
      mp[val]++;
  }
  
  cout<<res<<endl;
  
  }
}
