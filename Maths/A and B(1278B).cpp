#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
int main()
{
  IOS   
  ll t;
  cin>>t;
  
  while(t--)
  {
      ll a,b;
      cin>>a>>b;
      
      
      if(a==b)
      {
          cout<<"0"<<"\n";
          continue;
      }
      
      ll maxi = max(a,b);
      ll mini = min(a,b);
      
      ll diff = maxi-mini;
      
      ll sum=0;
      ll term = 0;
      while(sum<diff)
      {
          term++;
          sum += term;
          
      }
     // cout<<sum<<endl;
      if(sum==diff)
      {
          cout<<term<<endl;
          continue;
      }
      
      while((sum-diff)%2!=0)
      {
          term++;
          sum += term;
      }
      
      cout<<term<<"\n";
  }
}
