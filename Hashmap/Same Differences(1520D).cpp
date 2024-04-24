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
        
        map<int,int>mp;
        
        
        long long int res = 0;
        
        
        for(int i=0;i<n;i++)
        {
            long long int val = mp[a[i]-i];
            
            res += val;
            
            mp[a[i]-i]++;
        }
        
        cout<<res<<endl;
    }
}
