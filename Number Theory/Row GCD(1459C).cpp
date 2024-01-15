#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll n,m;
  cin>>n>>m;
  
  vector<ll>a(n);
  
  for(ll i=0;i<n;i++)
  {
      cin>>a[i];
  }
  
  vector<ll>b(m);
  
  for(ll i=0;i<m;i++)
  {
      cin>>b[i];
  }
  
  vector<ll>res;
  
  for(ll i=1;i<n;i++)
  {
      res.push_back(abs(a[i]-a[0]));
  }
  
  
  
  
  ll res_gcd = 0;
  
  for(ll i=0;i<res.size();i++)
  {
      res_gcd = __gcd(res_gcd,res[i]);
  }
  
  for(ll i=0;i<m;i++)
  {
     
      cout<<__gcd(a[0]+b[i],res_gcd)<<" ";
      
  }
}
