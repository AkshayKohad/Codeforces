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
        
        vector<vector<int>>range;
        
        for(int i=0;i<n;i++)
        {
            int l,r;
            cin>>l>>r;
            
            range.push_back({l,r,i});
        }
        
        sort(range.begin(),range.end());
        
        vector<int>res(n);
        
        int end = range[0][1];
        res[range[0][2]] = 1;
        int i=1;
        for(;i<n;i++)
        {
            if(end<range[i][0])
            break;
            
            end = max(end,range[i][1]);
            res[range[i][2]]=1;
        }
        
        if(i==n)
        {
            cout<<"-1\n";
        }
        else{
            for(;i<n;i++)
            {
                res[range[i][2]]=2;
            }
            
            for(int i=0;i<n;i++)
            cout<<res[i]<<" ";
            
            cout<<"\n";
        }
    }
}
