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
        
        vector<int>a(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        unordered_map<int,int>mp;
        
        int result = INT_MAX;
        
        for(int i=0;i<n;i++)
        {
            if(mp.find(a[i])!=mp.end())
            {
                result = min(result,i-mp[a[i]]+1);
                
            }
            mp[a[i]] = i;
        }
        if(result==INT_MAX)
        cout<<-1<<endl;
        
        else
        cout<<result<<endl;
    }
}
