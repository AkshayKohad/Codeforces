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
        
        vector<int>q(n);
        
        for(int i=0;i<n;i++)
        {
            cin>>q[i];
        }
        
        vector<int>a_low(n,0);
        vector<int>a_high(n,0);
        
        vector<int>visited(n+1,0);
        
        int i=0;
        while(i<n)
        {
            int j=i;
            a_low[i]=q[i];
            a_high[i]=q[i];
            visited[q[i]] = 1;
            
            while(j<n && q[i]==q[j])
            {
                j++;
            }
            
            i=j;
        }
        
        vector<int>val;
        
        for(i=1;i<=n;i++)
        {
            if(visited[i]==0)
            val.push_back(i);
        }
        
        int j=0;
        
        for(i=0;i<n;i++)
        {
            if(a_low[i]==0)
            {
             a_low[i] = val[j];
             j++;
            }
        }
        
        
        set<int>s;
        
        for(i=0;i<val.size();i++)
        s.insert(val[i]);
        
        for(i=0;i<n;i++)
        {
            if(a_high[i]==0)
            {
                auto it = s.lower_bound(q[i]);
                it--;
                
                a_high[i] = *it;
                s.erase(it);
            }
        }
        
        for(i=0;i<n;i++)
        cout<<a_low[i]<<" ";
        
        cout<<"\n";
        
        for(i=0;i<n;i++)
        cout<<a_high[i]<<" ";
        
        cout<<"\n";
        
        
    }
}
