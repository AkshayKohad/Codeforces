#include <bits/stdc++.h>
using namespace std;


#define ll long long


ll solve(ll a,ll b)
{
    if(a%b==0)
    {
        return a/b;
    }
    
    return a/b + solve(b,a%b);
}

int main()
{
  ll a,b;
  cin>>a>>b;
  
  cout<<solve(a,b);
  
}
