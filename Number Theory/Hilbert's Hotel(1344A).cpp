#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ios_base :: sync_with_stdio(NULL);
  cin.tie(NULL);
  cout.tie(NULL);
  
  ll t;
  cin>>t;
  
  while(t--)
  {
      ll n;
      cin>>n;
      
      vector<ll>a(n);
      
      set<ll>st;
      
      for(ll i=0;i<n;i++)
      {
          cin>>a[i];
          st.insert(((i+a[i])%n+n)%n);
      }
      
      if(st.size()==n)
      cout<<"YES"<<endl;
      
      else
      cout<<"NO"<<endl;
  }
  
  
}
