#include <bits/stdc++.h>
using namespace std;



int solve(int &n,int val,vector<int>&s,vector<int>&memo)
{
    if(val==n)
    return 0;
    
    if(memo[val]!=-1)
    return memo[val];
    
    // if(memo[sz][val]!=-1)
    // return memo[sz][val];
    
    
    if(val==0)
    {
        int res = 0;
        for(int i=1;i<=n;i++)
        {
             res = max(res,1+solve(n,i,s,memo));
        }
        
        return memo[val]=res;
       // return memo[sz][val] = res;
    }
    
    int res = 0;
    
    for(int i=2;i*val<=n;i++)
    {
        if(s[val-1]<s[i*val-1])
        res = max(res,1+solve(n,i*val,s,memo));
    }
    
    return memo[val] = res;
   // return memo[sz][val] = res;
    
    
}
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
     int n;
     cin>>n;
     vector<int>s(n);
     
     for(int i=0;i<n;i++)
     {
        //  s[i] = i+1;
         cin>>s[i];
     }
     
     
     vector<int>memo(n+1,-1);
     cout<<solve(n,0,s,memo)<<endl;
    }
}
