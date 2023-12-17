#include <bits/stdc++.h>
using namespace std;


int solve(int i,int &n,vector<int>&a,int player,vector<vector<int>>&memo)
{
    if(i==n)
    return 0;
    
    if(memo[i][player]!=-1)
    return memo[i][player];
    
    
    if(player==0)
    {
        int res = 0;
        
        if(i+1<n)
        {
            res = min(a[i]+a[i+1]+solve(i+2,n,a,1-player,memo),a[i]+solve(i+1,n,a,1-player,memo));
        }
        else{
            res = a[i]+solve(i+1,n,a,1-player,memo);
        }
        
        return memo[i][player] = res;
    }
    else{
        int res = 0;
        
        if(i+1<n)
        {
            res = min(solve(i+2,n,a,1-player,memo),solve(i+1,n,a,1-player,memo));
        }
        else{
            res = solve(i+1,n,a,1-player,memo);
        }
        
        return memo[i][player] = res;
    }
    
    return 0;
}
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int>a(n);
        
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        
        vector<vector<int>>memo(n,vector<int>(2,-1));
        
        cout<<solve(0,n,a,0,memo)<<endl;
    }
}
