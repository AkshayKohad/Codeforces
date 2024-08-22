#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        
        if(k==0)
        {
            for(int i=0;i<n;i++)
            {
                cout<<"-1 ";
            }
            
            cout<<"\n";
            
            continue;
        }
        
        vector<int>res(n);
        
        int i=0;
        while(k>0)
        {
            if(k>=n-i)
            {
                res[i] = 1000;
                k = k-(n-i);
                i++;
            }
            
            else{
                res[i] = k;
                k--;
                i++;
                while(k--)
                {
                    res[i]=-1;
                    i++;
                }
                
                res[i] = -2;
                i++;
            }
            
            
        }
        
           while(i<n)
            {
                
                res[i]=-1;
                i++;
                
            }
            
            
            for(int i=0;i<n;i++)
            {
                cout<<res[i]<<" ";
            }
            
            cout<<"\n";
    }
}
