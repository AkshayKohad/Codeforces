#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        
        string s;
        
        cin>>s;
        
        int res = 0;
        
        for(int i=0;i<k/2;i++)
        {
            vector<int>cnt(26,0);
            
            int ans = 0;
            for(int j=0;j+k-1<n;j+=k)
            {
                int i1 = j+i;
                int i2 = j + k-i-1;
                
                cnt[s[i1]-'a']++;
                ans++;
                
             
                cnt[s[i2]-'a']++;
                ans++;
                
            }
            
            int w = 0;
            for(int j=0;j<26;j++)
            {
                w = max(w,cnt[j]);
            }
            
            res += ans-w;
        }
        
        
        if(k&1)
        {
            vector<int>cnt(26,0);
            
            int ans = 0;
            for(int j=k/2;j<n;j+=k)
            {
                cnt[s[j]-'a']++;
                ans++;
                
                
            }
            
            int w = 0;
            for(int j=0;j<26;j++)
            {
                w = max(w,cnt[j]);
            }
            
            res+= ans-w;
        }
        
        cout<<res<<endl;
    }
    
    
}
