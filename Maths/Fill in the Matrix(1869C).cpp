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
        
        
        if(n>=m-1)
        {
            if(m==1)
            cout<<"0"<<endl;
            
            else
            cout<<m<<endl;
            
            int last=0;
            for(int i=0;i<m-1;i++)
            {
                int val = i;
                last=i;
                for(int j=0;j<m;j++)
                {
                    cout<<val<<" ";
                    val = (val+1)%m;
                }
                cout<<endl;
            }
            
            for(int i=m-1;i<n;i++)
            {
                int val = last;
                for(int j=0;j<m;j++)
                {
                   
                    cout<<val<<" ";
                    val = (val+1)%m;
                }
                
                cout<<endl;
            }
        }
        
        else{
            cout<<n+1<<endl;
            for(int i=0;i<n;i++)
            {
                int val = i;
                
                for(int j=0;j<m;j++)
                {
                    cout<<val<<" ";
                    val = (val+1)%m;
                }
                cout<<endl;
            }
        }
    }
}
