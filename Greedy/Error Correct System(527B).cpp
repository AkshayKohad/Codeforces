#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<char,int>mp;
    unordered_map<char,int>mp1;
    int n;
    cin>>n;
    string s,t;
    
    cin>>s>>t;
    
    int res_diff=0;
    int diff = 0;
    
    int index1=-1;
    int index2=-1;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i])
        {
            res_diff++;
             mp[s[i]]=i;
             mp1[t[i]]=i;
        }
        
    }
    
    
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i])
        {
            if(mp.find(t[i])!=mp.end())
            {
                int index = mp[t[i]];
                
                if(t[index]==s[i])
                {
                    if(diff<2)
                    {
                        diff=2;
                        index1=index;
                        index2=i;
                    }
                }
                
                else{
                    if(diff<1)
                    {
                        diff=1;
                        index1=index;
                        index2=i;
                    }
                }
            }
            
        }
    }
    
     for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i])
        {
            if(mp1.find(s[i])!=mp1.end())
            {
                int index = mp1[s[i]];
                
                if(s[index]==t[i])
                {
                    if(diff<2)
                    {
                        diff=2;
                        index1=index;
                        index2=i;
                    }
                }
                
                else{
                    if(diff<1)
                    {
                        diff=1;
                        index1=index;
                        index2=i;
                    }
                }
            }
            
        }
    }
  //  cout<<diff<<endl;
    
        if(diff>0)
        {
        cout<<res_diff-diff<<endl;
        cout<<min(index1,index2)+1<<" "<<max(index1,index2)+1;
        }
        
        else{
            cout<<res_diff<<endl;
            cout<<index1<<" "<<index2;
        }
}
