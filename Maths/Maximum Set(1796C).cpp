#include <bits/stdc++.h>
using namespace std;

#define mod 998244353

#define ll long long

int main()
{
  ll t;
  cin>>t;
  
  while(t--)
  {
      ll l,r;
      cin>>l>>r;
      
      ll max_size = 1;
      
      ll peak = l;
     
      while(peak*2<=r)
      {
          max_size++;
          peak = peak*2;
      }
      
      ll ans = 0;

      peak = peak/l;
      ll peak_using_2 = r/peak;      
      ans = (ans+peak_using_2-l+1)%mod;
     
      peak = peak*3;
      
      peak = peak/2;
    
      ll peak_using_2_one_3= r/peak;;
      
      ans = (ans + max(0ll,peak_using_2_one_3-l+1)*(max_size-1))%mod;
      
      cout<<max_size<<" "<<ans<<"\n";   
  }
}
