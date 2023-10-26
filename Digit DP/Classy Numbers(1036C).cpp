#include <bits/stdc++.h>
using namespace std;

int dp[20][2][2][4];
void reset()
{
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                for(int l=0;l<4;l++)
                {
                    dp[i][j][k][l] = -1;
                }
            }
        }
    }
}
int solve(int i,string &k,int is_zero,int is_tight,int count_non_zero)
{
    if(i==k.length())
    {
        if(is_zero)return 0;
        
        return 1;
    }
    
    if(dp[i][is_zero][is_tight][count_non_zero]!=-1)
    return dp[i][is_zero][is_tight][count_non_zero];
    
    
    
    int limit = 9;
    if(is_tight)
    {
        limit = k[i]-'0';
    }
    
    int res = 0;
    for(int j=0;j<=limit;j++)
    {
        int next_count_non_zero = count_non_zero;
        if(j!=0)
        {
            if(count_non_zero==3)
            continue;
            
            next_count_non_zero++;
        }
        
        int next_tight = (is_tight) && (j==limit);
        
        int next_zero = (is_zero) && (j==0);
        
        res = res + solve(i+1,k,next_zero,next_tight,next_count_non_zero);
        
    }
    
    return dp[i][is_zero][is_tight][count_non_zero] = res;
}

int main()
{
    
    int t;
    cin>>t;
    
    while(t--)
    {
      reset();    
     string l,r;
      cin>>l>>r;
     int val = solve(0,l,1,1,0);
    // cout<<val<<endl;
    reset();
     int val1 = solve(0,r,1,1,0);
    // cout<<val1<<endl;
     int ans = val1-val;
     
     int cnt=0;
     for(int i=0;i<l.length();i++)
     {
         int ch = l[i]-'0';
         if(ch>0)
         {
             cnt++;
         }
     }
     
     if(cnt<=3)
     ans++;
     
     cout<<ans<<endl;
    }
}
