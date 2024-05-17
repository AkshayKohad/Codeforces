#include <bits/stdc++.h>
using namespace std;

#define ll long long


bool check(vector<ll>&a,vector<ll>&b,ll r,ll &n,ll &m)
{
    ll i=0;
    ll j=0;
    
    ll cnt = 0;
    
    while(i<n && j<m)
    {
        int diff = abs(a[i]-b[j]);
        
        if(diff<=r)
        {
            i++;
            cnt++;
        }
        else{
            j++;
        }
    }
    
    if(cnt==n)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  
  ll n,m;
  cin>>n>>m;
  
  vector<ll>a(n);
  vector<ll>b(m);
  
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  
  for(int i=0;i<m;i++)
  {
      cin>>b[i];
  }
  
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  
  ll l=0;
  ll r = 2e9;
  
  ll ans = -1;
  
  
  while(l<=r)
  {
      ll mid = (l+r)/2;
      
      if(check(a,b,mid,n,m))
      {
          ans = mid;
          r = mid-1;
      }
      else{
          l = mid+1;
      }
  }
  
  cout<<ans<<'\n';
  
  
}
