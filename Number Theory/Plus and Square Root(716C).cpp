#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

ll power(ll a,ll n)
{
    if(n==0)
    return 1;
    
    if(n==1)
    return a;
    
    ll ans;
    
    if(n%2==1)
    {
      ans = power(a,(n-1)/2);
      
      return ans*ans*a;
    }
    else
    {
        ans = power(a,n/2);
        return ans*ans;
    }
}
int main()
{
  ll n;
  cin>>n;
  
  ll val = 2;
  n++;
  ll level=1;
  
  
  while(level!=n)
  {
      ll next_level = level+1;
    
      // add ((next_level*level)^2 - val)/level => next_level*next_level*level - val/level (always divisible)
       
      ll res_val = next_level*level*next_level;
      
      ll res = val/level;
      
      res = res_val-res;
     
      cout<<res<<"\n";
       
      val = next_level*level;
       
       level++;
  }
  
}
