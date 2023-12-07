// We use zero indexing in this solution. We also use half-closed interval (so subarray [l,r] is al,al+1,…,ar−1).
// Let's precalculate the array p(prefix_sum), where pi=∑j=0i−1aj (so px if sum of first x elements of a).
// Then subarray [l,r] is good if pr−pl=r−l, so pr−r=pl−l.
// Thus, we have to group all prefix by value pi−i for i from 0 to n. And if the have x prefix with same value of pi−i then we have to add x(x−1)2 to the answer.


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
