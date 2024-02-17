#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll n;
  cin>>n;
  
  vector<pair<ll,ll>>a(n);
  
  map<pair<ll,ll>,ll>cnt_points;
  
  map<ll,ll>x_points;
  map<ll,ll>y_points;
  
  
  for(ll i=0;i<n;i++)
  {
    ll x,y;
    cin>>x>>y;
    a[i] = {x,y};
    
    cnt_points[{x,y}]++;
    
    x_points[x]++;
    y_points[y]++;
    
  }
  
  ll res = 0;
  
  for(int i=0;i<n;i++)
  {
      ll x = a[i].first;
      ll y = a[i].second;
      
      ll cnt_point = cnt_points[{x,y}];
      ll cnt_x = x_points[x];
      ll cnt_y = y_points[y];
      
      res += (cnt_x-1) + (cnt_y-1) - (cnt_point-1);
      
      x_points[x]--;
      y_points[y]--;
      
      cnt_points[{x,y}]--;
      
  }
  
  cout<<res<<endl;
  
  
}
