#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int>arrival(n+1);
    vector<int>departure_time(n+1);
    
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        
        arrival[val]=i+1;
    }
    
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        
        departure_time[arrival[val]]=i+1;
    }
    
    int max_time = 0;
    int ans = 0;
    for(int i=1;i<=n;i++)
    {
        max_time = max(max_time,departure_time[i]);
        
        if(max_time>departure_time[i])
        ans++;
    }
     
    cout<<ans<<"\n";
    
}
