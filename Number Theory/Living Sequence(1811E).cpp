#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll t;
  cin>>t;
  
  while(t--)
  {
      ll k;
      cin>>k;
      
      string k_base9;
      
     
      while(k!=0)
      {
        ll rem = k%9;
        k_base9.push_back(rem+'0');
        k=k/9;
      }
      
      reverse(k_base9.begin(),k_base9.end());
      
      for(ll i=0;i<k_base9.length();i++)
      {
          ll val = k_base9[i]-'0';
          
          if(val<=3)
          cout<<val;
          
          else{
              cout<<val+1;
          }
      }
      
      cout<<endl;
  }
}
