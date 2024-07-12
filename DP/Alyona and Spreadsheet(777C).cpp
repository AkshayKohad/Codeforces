#include <bits/stdc++.h>
using namespace std;

#define boost ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

int main()
{
  ll n,m;
  cin>>n>>m;
  
  vector<vector<ll>>a(n+1,vector<ll>(m+1));
  
  for(ll i=1;i<=n;i++)
  {
      for(ll j=1;j<=m;j++)
      {
          cin>>a[i][j];
      }
  }
  
  vector<ll>max_res(n+1,-1);
  
  
  for(ll j=1;j<=m;j++)
  {
      ll res_min = INT_MAX;
      
      for(ll i=1;i<=n;i++)
      {
          ll L=i;
          ll R=i+1;
          
          while(R<=n && a[R-1][j]<=a[R][j])
          {
              R++;
          }
          
          for(ll w=L;w<R;w++)
          {
              max_res[w] = max(max_res[w],R-w);
          }
          
          i = R-1;
      }
      
  }
  

  ll k;
  cin>>k;
  
  while(k--)
  {
      ll l,r;
      cin>>l>>r;
      
      if(max_res[l]>r-l)
      {
          cout<<"Yes\n";
      }
      else{
          cout<<"No\n";
      }
  }
  
}
