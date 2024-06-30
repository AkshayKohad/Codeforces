#include <bits/stdc++.h>
using namespace std;

#define boost ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long


bool check(vector<ll>&a,ll num,ll k,vector<ll>&prefix_sum,ll n, ll &number)
{
    for(ll i=0;i<n;i++)
    {
        if(i-(num-1)<0)
        {
            continue;
        }
        
        ll diff = a[i]*num - (prefix_sum[i]-prefix_sum[i-(num-1)] + a[i-(num-1)]);
        
        if(diff<=k)
        {
         number = a[i];    
         return true;
        }
        
    }
    
    return false;
}

int main()
{
  ll n,k;
  cin>>n>>k;
  
  vector<ll>a(n);
  
  for(ll i=0;i<n;i++)
  {
      cin>>a[i];
  }
  
  sort(a.begin(),a.end());
  
  vector<ll>prefix_sum(n,0);
  
  prefix_sum[0] = a[0];
  
  for(ll i=1;i<n;i++)
  {
      prefix_sum[i]+=prefix_sum[i-1]+a[i];
  }
  
  
  ll l = 1;
  ll r = n;
  
  ll ans = -1;
  ll number = -1;
  
  while(l<=r)
  {
      ll mid = (l+r)/2;
      
      if(check(a,mid,k,prefix_sum,n,number))
      {
          ans = mid;
          l = mid+1;
      }
      else{
          r = mid-1;
      }
  }
  
  cout<<ans<<" "<<number;
  
  return 0;
  
}
