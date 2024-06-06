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
      cin>>a[i];
      
      vector<ll>b(n);
      for(ll i=0;i<n;i++)
      cin>>b[i];
      
      
      sort(a.begin(),a.end());
      sort(b.begin(),b.end());
      
      ll res_ans=0;
      
      for(ll i=1;i<=n;i++)
      {
          ll j=0;
          ll k=n-i;
          
          ll cnt=i;
          
          ll ans = abs(b[n-1]-a[0]);
          
          while(cnt--)
          {
              ans = min(ans,abs(a[j]-b[k]));
              j++;
              k++;
          }
          
          ll ind_a=j;
          ll ind_b=0;
          
          while(ind_a<n && ind_b<n-i)
          {
              ans = min(ans,abs(a[ind_a]-b[ind_b]));
              ind_a++;
              ind_b++;
          }
          
          res_ans = max(res_ans,ans);
      }
      
      cout<<res_ans<<"\n";
  }
}
