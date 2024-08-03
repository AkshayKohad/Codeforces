#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(ll num,vector<ll>bottles,ll limit)
{
    priority_queue<ll>pq;
    
    for(ll i=0;i<num;i++)
    {
        pq.push(bottles[i]);
    }
    
    while(pq.size()>1)
    {
        // first maximum element
        ll val = pq.top();
        
        pq.pop();
        
        // second maximum element
        pq.pop();
        
        if(limit<val)return false;
        
        limit = limit-val;
        
    }
    
    if(pq.size()==1)
    {
         ll val = pq.top();
         pq.pop();
         
         if(limit<val)return false;
        
        limit = limit-val;
    }
    
    return true;
    
}

int main()
{
  ll n,h;
  cin>>n>>h;
  
  vector<ll>bottles(n);
  
  for(ll i=0;i<n;i++)
  cin>>bottles[i];
  
  ll l=0;
  ll r=n;
  
  ll ans=-1;
  
  while(l<=r)
  {
      ll mid = (l+r)/2;
      
      if(check(mid,bottles,h))
      {
          ans = mid;
          l = mid+1;
      }
      else{
          r = mid-1;
      }
  }
  
  cout<<ans;
  return 0;
}
