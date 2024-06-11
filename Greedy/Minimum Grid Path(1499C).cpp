#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define ll long long

int main()
{
  IOS
  
  ll t;
  cin>>t;
  
  while(t--)
  {
      ll n;
      cin>>n;
      
      ll cnt_odd = n;
      ll cnt_even = n;
      
      ll num1;
      ll num2;
      
      cin>>num1;
      cin>>num2;
       
      ll min_cost_odd=num2;
      ll min_cost_even=num1;
      ll res = min_cost_odd*cnt_odd + min_cost_even*cnt_even;
     
      cnt_even--;
      cnt_odd--;
      
      ll sum=num2+num1;
      
       for(ll i=0;i<n-2;i++)
      {
          ll val;
          cin>>val;
          
          sum+=val;
          
         
          if(i%2==0)
          {
              min_cost_even = min(val,min_cost_even);
              cnt_even--;
          }
          else{
              min_cost_odd = min(val,min_cost_odd);
              cnt_odd--;
          }
          
          ll ans = sum + cnt_even*min_cost_even + cnt_odd*min_cost_odd;
        
          res = min(res,ans);
      }
      
      cout<<res<<"\n";    
  }
   
}
