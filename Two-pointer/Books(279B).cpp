#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;
    
    ll t;
    cin>>t;
    
    vector<ll>a(n);
    
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
  
   ll res = 0;
   ll answer = 0;
  
  ll i=0;
  ll j=0;
  
  while(j<n)
  {
      res = res+a[j];
      
      if(res>t)
      {
          while(i<=j && res>t)
          {
              res = res-a[i];
              i++;
          }
          
          if(i>j)
          {
              j=i;
          }
          else{
              answer = max(answer,j-i+1);
              j++;
          }
      }
      
      else{
          answer = max(answer,j-i+1);
          j++;
      }
      
      
  }
    
    cout<<answer<<endl;
}
