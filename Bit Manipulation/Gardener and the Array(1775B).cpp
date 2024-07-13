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
        
        vector<vector<int>>res(n);
        map<int,int>mp;
        
        for(int i=0;i<n;i++)
        {
            
            int k;
            cin>>k;
            
            
            while(k--)
            {
                int val;
                cin>>val;
                mp[val]++;
                
                res[i].push_back(val);
            }
            
        }
        
        
        int flag=0;
        for(int i=0;i<n;i++)
        {
            int sz = res[i].size();
            
            int temp_flag=1;
            
            for(int j=0;j<sz;j++)
            {
                if(mp[res[i][j]]==1)
                {
                  temp_flag=0;        
                  break;
                }
            }
            
            if(temp_flag)
            {
                flag=1;
                break;
            }
        }
        
        if(flag==0)
        {
            cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
        }
        
    }
}
