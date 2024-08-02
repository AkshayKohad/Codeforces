#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll t;
  cin>>t;
  
  while(t--)
  {
      ll n;
      cin>>n;
      
      vector<ll>a(n);
      for(ll i=0;i<n;i++)
      {
          cin>>a[i];
      }
      
      ll i=0;
      
      vector<ll>num;
      num.push_back(0);
      
      while(i+1<n)
      {
          
          
          if(a[i]>a[i+1])
          {
              
              while(i+1<n && a[i]>a[i+1])
              {
                  i++;
              }
              
              num.push_back(i);
          }
          
          else if(a[i]<a[i+1])
          {
              while(i+1<n && a[i]<a[i+1])
              {
                  i++;
              }
              
              num.push_back(i);
              
              
          }
          else{
              while(i+1<n && a[i]==a[i+1])
              {
                  i++;
              }
              
          }
      }
      
      
    ll ans = 0;
  
    cout<<num.size()<<"\n";
      
      for(int i=0;i<num.size();i++)
      {
          cout<<a[num[i]]<<" ";
      }
      
      cout<<"\n";
      
  }
}
