#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll n;
  cin>>n;
  
  vector<ll>a(n);
  
  for(ll i=0;i<n;i++)
  cin>>a[i];
  
  
  ll dp[n][2];
  
  dp[0][0]=1;
  dp[0][1]=0;

 

for( ll i=1;i<n;i++)
{
    
    if(a[i]>a[i-1])
    {
        dp[i][0]=dp[i-1][0]+1;
        
        ll res = 0;
        
        
        if(i-2>=0 && a[i]>a[i-2])
        {
            dp[i][1] = max(dp[i-1][1]+1,dp[i-2][0]+1);
        }
        else{
            dp[i][1] = dp[i-1][1]+1;
        }
    }
    else{
        dp[i][0] = 1;
        
        ll res = 0;
        
        
        if(i-2>=0 && a[i]>a[i-2])
        {
            dp[i][1] = dp[i-2][0]+1;
        }
        else{
            dp[i][1] = 0;
        }
    }
}

ll answer = 0;

for(ll i=0;i<n;i++)
{
    answer = max({answer,dp[i][0],dp[i][1]});
}

cout<<answer<<endl;

}
