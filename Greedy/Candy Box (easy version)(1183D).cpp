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
        
        map<int,int>mp;
        
        vector<int>freq;
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
            mp[a[i]]++;
        }
        
        for(auto k:mp)
        {
            freq.push_back(k.second);
        }
        
        sort(freq.begin(),freq.end());    
        
        int m = freq.size();
        
        int res = freq[m-1];
        
        int mini = freq[m-1];
        
        
        for(int i=m-2;i>=0;i--)
        {
            mini = min(mini-1,freq[i]);
            
            mini = max(mini,0);
            
            res += mini;
        }
        
        cout<<res<<endl;
    }
}
