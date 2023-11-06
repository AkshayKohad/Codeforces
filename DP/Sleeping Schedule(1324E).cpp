#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(ll i,vector<ll>&a,ll &l,ll &r,ll &h,ll &n,ll ti,vector<vector<ll>>&memo)
{
    if(i==n)return 0;
    
    if(memo[i][ti]!=-1)
    return memo[i][ti];
    
    
    ll res = (ti+a[i])%h;
    
    ll res1 = (((ti+a[i])%h)-1 +h )%h;
    
    ll flag = 0;
    ll flag1 = 0; 
    if(res>=l && res <=r)
    {
        flag=1;
    }
    if(res1>=l && res1 <=r)
    {
        flag1 = 1;
    }
    
    return memo[i][ti] =  max(flag+solve(i+1,a,l,r,h,n,res,memo),flag1+solve(i+1,a,l,r,h,n,res1,memo));
}
int main() {
    
    ll n,h,l,r;
    cin>>n>>h>>l>>r;
    
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    
    vector<vector<ll>>memo(2001,vector<ll>(2001,-1));
    cout<<solve(0,a,l,r,h,n,0,memo);
    
    
	return 0;
}
