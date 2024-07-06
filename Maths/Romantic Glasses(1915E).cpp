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
          
          if(i%2==1)
          a[i]=-a[i];
      }
      
      set<ll>sum_record;
      
      sum_record.insert(0);
      
      ll sum = 0;
      
      ll flag = 0;
      
      for(ll i=0;i<a.size();i++)
      {
          sum += a[i];
          if(sum_record.find(sum)!=sum_record.end())
          {
              flag=1;
              break;
          }
          
          sum_record.insert(sum);
      }
      
      if(flag)
      {
          cout<<"YES\n";
          continue;
      }
      else
      {
          cout<<"NO\n";
      }
  }
}
