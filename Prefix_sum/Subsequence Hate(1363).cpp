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
        
       vector<int>prefix_one(n,0);
       vector<int>prefix_zero(n,0);
       
        if(s[0]=='0')
        {
            prefix_zero[0]=1;
            prefix_one[0]=0;
        }
        else{
            prefix_zero[0]=0;
            prefix_one[0]=1;
        }
        
        for(int i=1;i<n;i++)
        {
            if(s[i]=='1')
            {
                prefix_one[i] = prefix_one[i]+prefix_one[i-1]+1;
                prefix_zero[i] = prefix_zero[i-1];
            }
            else{
                prefix_zero[i] = prefix_zero[i]+prefix_zero[i-1]+1;
                prefix_one[i] = prefix_one[i-1];
            }
        }
        
        int res = 0;
        
        res = min(prefix_one[n-1],prefix_zero[n-1]);
        
       // index = -1;
        for(int i=1;i<n;i++)
        {
            int ans = min(prefix_zero[i-1]+prefix_one[n-1]-prefix_one[i-1],prefix_one[i-1]+prefix_zero[n-1]-prefix_zero[i-1]);
            res = min(res,ans);
        }
        
        cout<<res<<endl;
    }
}
