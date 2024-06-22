#include <bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{
  ll t;
  cin>>t;
  
  while(t--)
  {
      ll n,k;
      cin>>n>>k;
      
      ll i=1;
      ll j=n;
      
      ll max_sum=0;
      
      while(i<=j)
      {
          max_sum += 2*(j-i);
          i++;
          j--;
      }
      
      
      if(k>max_sum || k%2==1)
      {
          cout<<"NO\n";
          continue;
      }
      
      vector<ll>a(n);
      
      for(ll i=0;i<n;i++)
      {
          a[i]=i+1;
      }
      
      cout<<"YES\n";
      
      i=0;
      j=n-1;
      
      while(k>0)
      {
          ll diff = 2*(a[j]-a[i]);
          
          if(k>=diff)
          {
              swap(a[i],a[j]);
              k=k-diff;
              i++;
              j--;
          }
          else{
              ll index = k/2;
              
              swap(a[i],a[i+index]);
              
              diff = 2*(a[i+index]-a[i]);
              
              k=k-diff;
              break;
          }
      }
      
      for(ll i=0;i<n;i++)
      {
          cout<<a[i]<<" ";
      }
      cout<<"\n";
  }
}
