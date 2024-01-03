#include <bits/stdc++.h>
using namespace std;


#define ll long long

int main()
{
    
  ll t;
  cin>>t;
  
  while(t--)
  {
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    
    ll ans = (x2-x1)*(y2-y1) + 1;
    
    cout<<ans<<endl;
  }
}
