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
      
      vector<ll>b(n);
      
      for(ll i=0;i<n;i++)
      {
          cin>>a[i];
      }
      
      for(ll i=0;i<n;i++)
      {
          cin>>b[i];
      }
      
      vector<pair<ll,ll>>res;
      
      for(ll i=0;i<n;i++)
      {
          res.push_back({a[i]-b[i],i+1});
      }
      
      
      sort(res.begin(),res.end());
      
      ll max_val = res[n-1].first;
      
      ll j=n-1;
      
      vector<ll>ans;
      
      while(j>=0 && res[j].first==max_val)
      {
          ans.push_back(res[j].second);
          j--;
      }
      
      sort(ans.begin(),ans.end());
      
      cout<<ans.size()<<"\n";
      
      for(ll i=0;i<ans.size();i++)
      {
          cout<<ans[i]<<" ";
      }
      
      cout<<"\n";
  }
    
}
