#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll n,k;
  cin>>n>>k;
  
  if(n==1 && k==0)
  {
      cout<<"1\n";
      return 0;
  }
  
  if(n==1 && k>0)
  {
      cout<<"-1\n";
      return 0;
  }
  ll divi = n/2;
  
  if(divi>k)
  {
      cout<<"-1\n";
      return 0;
  }
  
  ll val = divi-1;
  
  ll rem = k-val;
  
  vector<ll>a(n);
  
  
  
  a[0] = rem;
  a[1] = 2ll*rem;
  
  
  for(ll i=2;i<n;i++)
  {
      a[i]=a[i-1]+1;
  }
  
  for(int i=0;i<n;i++)
  {
      cout<<a[i]<<" ";
  }
  
  return 0;
  
  
}
