#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll n;
    cin>>n;
    
    ll res = n;
    for(ll i=1;i*i<=n;i++)
    {
          if(n%i==0)
          {
              ll a = i;
              ll b = n/i;
              
              ll hcf = __gcd(a,b);
              
              ll lcm = a*b/hcf;
              
              if(lcm==n)
              res = min(res,max(a,b));
          }
    }
    
    cout<<n/res<<" "<<res<<endl;
}
