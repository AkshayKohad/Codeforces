#include <bits/stdc++.h>
using namespace std;

int solve(int i,vector<int>&a,int activity,int &n,vector<vector<int>>&memo)
{
    if(i==n)
    return 0;
    
    if(memo[i][activity]!=-1)
    return memo[i][activity];
    
    
        if(a[i]==0)
        {
            return 1+solve(i+1,a,0,n,memo);
        }
        else if(a[i]==1)
        {
            int res = 0;
            int res1 = 0;
            
            if(activity==1)
            {
                return memo[i][activity] = 1+solve(i+1,a,0,n,memo);
            }
            else{
                return memo[i][activity] = solve(i+1,a,1,n,memo);
            }
        }
        else if(a[i]==2)
        {
            
            if(activity==2)
            {
                return memo[i][activity] =  1+solve(i+1,a,0,n,memo);
            }
            else{
                return memo[i][activity] = solve(i+1,a,2,n,memo);
            }
        }
        else{
            if(activity==1)
            {
                return memo[i][activity] = solve(i+1,a,2,n,memo);
            }
            else if(activity==2)
            {
                return memo[i][activity] = solve(i+1,a,1,n,memo);
            }
            else{
                return memo[i][activity] = min(solve(i+1,a,1,n,memo),solve(i+1,a,2,n,memo));
            }
        }
        
        return 0;
    
}
int main()
{
    int n;
    cin>>n;
    
    vector<int>a(n);
    
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    vector<vector<int>>memo(n+1,vector<int>(3,-1));
    cout<<solve(0,a,0,n,memo);
}
