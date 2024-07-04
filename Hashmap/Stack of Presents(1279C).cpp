#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        
        vector<int>a(n);
        vector<int>b(m);
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        
        set<int>s;
        
        int i=0;
        int j=0;
         long long int res_time = 0;
        while(j<m)
        {
            int val = b[j];
            
            if(s.find(val)!=s.end())
            {
                res_time++;
                s.erase(val);
                j++;
                continue;
            }
            
            
            while(i<n && a[i]!=val)
            {
                s.insert(a[i]);
                i++;
            }
            
            res_time += 2*s.size() +1;
            j++;
            i++;
        }
        
        cout<<res_time<<"\n";
    }
}
