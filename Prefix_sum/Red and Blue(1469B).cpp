#include <bits/stdc++.h>
using namespace std;
 
#define ll long long 
 
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int>r(n);
        
        for(int i=0;i<n;i++)
        cin>>r[i];
        
        int m;
        cin>>m;
        
        vector<int>b(m);
        for(int i=0;i<m;i++)
        cin>>b[i];
        
        vector<int>prefix_r(n+1,0);
        vector<int>prefix_b(m+1,0);
        
        
        for(int i=1;i<=n;i++)
        {
          prefix_r[i] = prefix_r[i-1] + r[i-1];    
        }
        
        for(int j=1;j<=m;j++)
        {
            prefix_b[j] = prefix_b[j-1] + b[j-1];
        }
        
        
        int result = 0;
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                int val = prefix_r[i] + prefix_b[j];
                
            
                result = max(result,val);
            }
        }
        
        cout<<result<<endl;
      
    }
}
