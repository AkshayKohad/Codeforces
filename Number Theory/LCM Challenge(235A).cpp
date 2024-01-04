#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll n;
  cin>>n;
  
  
  if(n==1 || n==2)
  {
      cout<<n<<endl;
      return 0;
  }
  
 
 
 
 ll res = n*(n-1);
 
 ll cur_lcm = (n*(n-1))/__gcd(n,n-1);
 
 for(ll i=n-2;i>=1;i--)
 {
     ll ans = (cur_lcm*i)/__gcd(cur_lcm,i);
     
     res = max(res,ans);
 }
 
 
   cur_lcm = ((n-1)*(n-2))/__gcd(n-1,n-2);
 
 for(ll i=n-3;i>=1;i--)
 {
     ll ans = (cur_lcm*i)/__gcd(cur_lcm,i);
     
     res = max(res,ans);
 }
 
 
 
   cur_lcm = ((n)*(n-2))/__gcd(n,n-2);
 
 for(ll i=n-3;i>=1;i--)
 {
     ll ans = (cur_lcm*i)/__gcd(cur_lcm,i);
     
     res = max(res,ans);
 }
 
 
 cout<<res<<endl;
 
}
