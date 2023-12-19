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
        
        int x;
        cin>>x;
        
        int n = s.length();
        
        vector<int>a(n,-1);
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                int prev = i-x;
                int next = i+x;
                
                if(prev>=0)
                a[prev]=0;
                
                if(next<n)
                a[next]=0;
            }
        }
        
        int flag=1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                int prev = i-x;
                int next = i+x;
                
                if(prev<0 && next>=n)
                {
                    flag=0;
                    break;
                }
                else if(prev<0)
                {
                    if(a[next]==-1 || a[next]==1)
                    {
                        a[next] = 1;
                    }
                    else{
                        flag=0;
                        break;
                    }
                }
                else if(next>=n)
                {
                    if(a[prev]==-1 || a[prev]==1)
                    {
                        a[prev] = 1;
                    }
                    else{
                        flag=0;
                        break;
                    }
                }
                else{
                    
                    if(a[prev]==0 && a[next]==0)
                    {
                        flag=0;
                        break;
                    }
                    else{
                        if(a[prev]==-1)
                        a[prev]=1;
                        
                        if(a[next]==-1)
                        a[next]=1;
                    }
                    
                }
            }
        }
        
        if(!flag)
        {
            cout<<-1<<endl;
            
        }
        else{
            for(int i=0;i<n;i++)
            {
                if(a[i]==-1)
                a[i]=1;
                
                cout<<a[i];
            }
            cout<<endl;
        }
    }
}
