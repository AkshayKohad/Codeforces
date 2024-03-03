#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    
  ll n;
  cin>>n;
  
  vector<ll>a(n);
  vector<ll>b(n);
  
  for(ll i=0;i<n;i++)
  cin>>a[i];
  
  for(ll i=0;i<n;i++)
  cin>>b[i];
  
  vector<vector<ll>>mat(n,vector<ll>(n));
  
  vector<ll>prefix_diagonal(n,0);
  for(ll i=0;i<n;i++)
  {
      for(ll j=0;j<n;j++)
      {
          mat[i][j] = a[i]*b[j];
          
          if(i==0 && j==0)
          {
              prefix_diagonal[i] = mat[i][j];
              continue;
          }
          
          if(i==j)
          {
              prefix_diagonal[i] = prefix_diagonal[i-1]+mat[i][j];
          }
          
      }
  }
  
  for(int j=1;j<n;j++)
  {
      int i=1;
      int val = j-1;
      
      while(i<n && val>=0)
      {
          mat[i][val] += mat[i-1][val+1];
          i++;
          val--;
          
      }
  }
  
  for(int i=1;i<n;i++)
  {
      int j = n-2;
      int val = i+1;
      
        while(val<n && j>=0)
      {
          mat[val][j] += mat[val-1][j+1];
          j--;
          val++;
          
      }
  }
  

  ll res = prefix_diagonal[n-1];

  for(int i=0;i<n;i++)
  {
      for(int j=i;j<n;j++)
      {
          if(i==j)continue;
          
          ll reversed = mat[j][i];
          
          if(i-1>=0 && j+1<n)
          {
              reversed -= mat[i-1][j+1];
          }
          
          ll sum = 0;
          ll sum1 = 0;
          
          if(i-1>=0)
          {
              sum = prefix_diagonal[i-1];
          }
          if(j+1<n)
          {
              sum1 = prefix_diagonal[n-1]-prefix_diagonal[j];
          }
          
          ll total = reversed+sum+sum1;
          
        
        
          res = max(res,total);
      }
  }
  
  cout<<res<<endl;
  
}
