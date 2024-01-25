#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll n;
  
  cin>>n;
  
  vector<ll>a(n);
  
  for(ll i=0;i<n;i++)
  {
      cin>>a[i];
  }
  
  vector<ll>small;
  vector<ll>large;
  sort(a.begin(),a.end());
  
  ll middle = n/2;
  
  for(ll i=0;i<middle;i++)
  {
      small.push_back(a[i]);
  }
  
  for(ll i=middle;i<n;i++)
  {
      large.push_back(a[i]);
  }
  
  
  vector<ll>res;
  
  ll i=0;
  ll j=0;
  ll l_sz = large.size();
  ll s_sz = small.size();
  
  while(i<l_sz && j<s_sz)
  {
      res.push_back(large[i]);
      res.push_back(small[j]);
      i++;
      j++;
  }
  
  while(i<l_sz)
  {
      res.push_back(large[i]);
      i++;
  }
  while(j<s_sz)
  {
      res.push_back(small[j]);
      j++;
  }
  
  ll answer = 0;
  
  for(ll w=1;w<n-1;w++)
  {
      if(res[w]<res[w-1] && res[w]<res[w+1])
      answer++;
  }
  
  cout<<answer<<endl;
  
  for(ll w=0;w<n;w++)
  cout<<res[w]<<" ";
  cout<<endl;
}
