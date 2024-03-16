#include <bits/stdc++.h>
using namespace std;

#define ll long long




void solve(ll i,ll n,vector<ll>a,ll cnt,ll &res)
{
    if(i==a.size())
    {
        for(ll j=49;j>=0;j--)
        {
            ll bit = (n>>j)&1;
            
            if(bit==1)
            {
                cnt++;
            }
        }
        
        res = min(res,cnt);
        return;
    }
    
   
    solve(i+1,n-a[i],a,cnt+1,res);
    
    solve(i+1,n,a,cnt,res);
}

int main()
{
  vector<ll>values;
  
  ll res = 1;
  
  for(ll i=1;i<=14;i++)
  {
      res = res*i;
      values.push_back(res);
  }
 
  
  ll t;
  cin>>t;
  
  while(t--)
  {
      ll n;
      cin>>n;
      
      
      
      ll res = 100;
      solve(0,n,values,0,res);
      
      cout<<res<<endl;
     
  }
  
}
