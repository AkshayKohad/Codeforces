#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long


ll power(ll a,ll n)
{
    if(n==0) return 1;
    
    if(n==1) return a;
    
    if(n%2==1)
    {
        ll val = power(a,(n-1)/2);
        
        return val*val*a;
    }
    
    //for even
        ll val = power(a,n/2);
        
        return val*val;
    
}

int main()
{
  ll n,k;
  
  cin>>n>>k;
  
  if(k==1)
  {
      cout<<n;
  }
  
  else{
      ll val = n;
      
      int count=0;
      while(n!=0)
      {
          n = n>>1;
          count++;
      }
      
      cout<<power(2,count)-1;
  }
}
