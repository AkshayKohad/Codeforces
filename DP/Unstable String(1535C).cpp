#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        
        int n = s.length();
        
        int dp[n][2];
        memset(dp,0,sizeof dp);
        
        dp[0][0] = (s[0]!='1');
        dp[0][1] = (s[0]!='0');
        
        for(int i=1;i<n;i++)
        {
            if(s[i]=='1')
            {
                dp[i][1] = 1+dp[i-1][0]; 
            }
            else if(s[i]=='0')
            {
                dp[i][0] = 1+dp[i-1][1];
            }
            else{
                dp[i][1] = 1+dp[i-1][0];
                dp[i][0] = 1+dp[i-1][1];
            }
        }
        
        long long ans = 0;
        for(int i=0;i<n;i++)
        {
            ans += max(dp[i][0],dp[i][1]);
        }
        
        cout<<ans<<endl;
    }
}
