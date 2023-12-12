#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
  int t;
  cin>>t;
  
  while(t--)
  {
      int a,b,k;
      cin>>a>>b>>k;
      
      map<ll,ll>boys;
      map<ll,ll>girls;
      
      vector<pair<ll,ll>>grp(k);
      
      for(ll i=0;i<k;i++)
      {
          ll b;
          cin>>b;
          grp[i].first = b;
      }
       for(ll i=0;i<k;i++)
      {
          ll g;
          cin>>g;
          grp[i].second = g;
      }
      
      ll result = 0;
      
      ll cur_grp_cnt = 1;
      
      boys[grp[k-1].first]++;
      girls[grp[k-1].second]++;
      
      for(ll i=k-2;i>=0;i--)
      {
          ll b = grp[i].first;
          ll g = grp[i].second;
          
          
          ll ans = cur_grp_cnt - boys[b] - girls[g];
          
          result += ans;
          
          boys[b]++;
          girls[g]++;
          cur_grp_cnt++;
      }
      
      cout<<result<<endl;
      
      
  }
}
