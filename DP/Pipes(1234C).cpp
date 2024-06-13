#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<vector<int>>pipes(2,vector<int>(n));
        
        
        for(int i=0;i<2;i++)
        {
            string s;
            cin>>s;
            
            for(int j=0;j<n;j++)
            {
                pipes[i][j] = s[j]-'0';
            }
            
        }
        
        
        int i=1;
        int j=n-1;
        
        int prevx = -1;
        
        while(j>=0)
        {
            if(prevx==-1)
            {
                if(pipes[i][j]>=3)
                {
                    prevx=i;
                    i=i-1;
                    continue;
                }
                else{
                    prevx=i;
                    j=j-1;
                    continue;
                }
            }
            
            
            if(i==1)
            {
                if(pipes[i][j]>=3)
                {
                    if(prevx==1)
                    {
                        prevx=i;
                        i=i-1;
                    }
                    else{
                        prevx=i;
                        j=j-1;
                    }
                }
                else{
                    if(prevx==1)
                    {
                        prevx=i;
                        j=j-1;
                    }
                    else{
                        break;
                    }
                }
            }
            
            else{
                if(pipes[i][j]>=3)
                {
                    if(prevx==1)
                    {
                        prevx=i;
                        j=j-1;
                    }
                    else{
                        prevx=i;
                        i=i+1;
                    }
                }
                else{
                    if(prevx==1)
                    {
                        break;
                    }
                    else{
                        prevx=i;
                        j=j-1;
                    }
                }
            }
        }
        
        if(i==0 && j==-1)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
}
