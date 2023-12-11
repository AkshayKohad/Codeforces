#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int solve(int &n,int &k,int sz,int val,vector<vector<int>>&memo)
{
    if(sz==0)
    return 1;
    
    
    if(memo[sz][val]!=-1)
    return memo[sz][val];
    
    
    if(sz==k)
    {
        int res = 0;
        for(int i=1;i<=n;i++)
        {
             res = (res+solve(n,k,sz-1,i,memo))%mod;
        }
        
        return memo[sz][val] = res;
    }
    
    int res = 0;
    
    for(int i=1;i*val<=n;i++)
    {
        res = (res+solve(n,k,sz-1,i*val,memo))%mod;
    }
    
    return memo[sz][val] = res;
    
    
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<vector<int>>memo(k+1,vector<int>(n+1,-1));
    cout<<solve(n,k,k,0,memo);
}
