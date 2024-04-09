#include <bits/stdc++.h>
using namespace std;


#define ll long long

ll solve(ll i,ll skip,ll n,vector<ll>&h,vector<vector<ll>>&memo)
{
    if(i>n)
    {
        return 0;
    }
    
    if(memo[i][skip]!=-1)
    return memo[i][skip];
    
    
    ll res = 0;
    
    if(skip==0)
    {
        ll maxi = max(h[i-1],h[i+1]);
        
        if(h[i]>maxi)
        {
            
            ll ans = solve(i+2,0,n,h,memo);
            
            ll ans1 = solve(i+3,1,n,h,memo);
            
            res += min(ans,ans1);
        }
        else{
           
            ll ans =  solve(i+2,0,n,h,memo);
            ll ans1 = solve(i+3,1,n,h,memo);
            
            res +=  maxi-h[i]+1 + min(ans,ans1);
        }
    }
    
    else{
        
        ll maxi = max(h[i-1],h[i+1]);
         if(h[i]>maxi)
        {
            
            ll ans = solve(i+2,1,n,h,memo);
            
           
            
            res += ans;
        }
        else{
           
            ll ans =  solve(i+2,1,n,h,memo);
           
            
            res +=  maxi-h[i]+1 + ans;
        }
    }
    
    return memo[i][skip] = res;
    
    
}
int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n;
        cin>>n;
        
        vector<ll>h(n);
        
        for(ll i=0;i<n;i++)
        cin>>h[i];
        
        
        
        if(n%2==1)
        {
            ll ans = 0;
            for(ll i=1;i<n-1;i=i+2)
            {
                ll maxi = max(h[i-1],h[i+1]);
                
                if(h[i]>maxi)
                continue;
                
                ans += maxi-h[i]+1;
        
            }
            
            cout<<ans<<endl;
        }
        else{
           vector<vector<ll>>memo(n+1,vector<ll>(2,-1));
           
           ll result = solve(1,0,n-1,h,memo);
           ll reuslt2 = solve(2,1,n-1,h,memo);
           
           cout<<min(result,reuslt2)<<endl;
        }
    }
}
